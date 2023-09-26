/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:16:48 by axel              #+#    #+#             */
/*   Updated: 2023/09/26 14:29:04 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ConvertScal.hpp"

ConvertScal::ConvertScal(void)
{
    std::cout << "Default constructor ConvertScal called" << std::endl;
    this->_find_pars_type = false;
    this->_type = 0;
}

ConvertScal::ConvertScal(const ConvertScal &copy)
{
    std::cout << "Copy constructor ConvertScal called" << std::endl;
    this->_find_pars_type = copy._find_pars_type;
    this->_type = copy._type;
    *this = copy;
}

ConvertScal::~ConvertScal(void)
{
    std::cout << "Destructor ConvertScal called" << std::endl;
}

ConvertScal &ConvertScal::operator=(const ConvertScal &assigment)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &assigment)
    {
        this->_find_pars_type = assigment._find_pars_type;
        this->_type = assigment._type;
    }
    return *this;
}

bool    ConvertScal::get_find_pars_type(void) const
{
    return (this->_find_pars_type);
}

int     ConvertScal::get_type(void) const
{
    return (this->_type);
}

void    ConvertScal::pars_type(std::string str)
{
    int i = 0;
    int len = str.length();
    bool is_double = false;
    
    if (str == "nan" || str == "nanf")
    {
        std::cout << "nan: " << str << std::endl;
        this->_type = 6;
        this->_find_pars_type = true;
        return;
    }
    else if (str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
    {
        std::cout << "inf: " << str << std::endl;
        this->_type = 5;
        this->_find_pars_type = true;
        return;
    }
    if (len == 1 && (str.at(0) < '0' || str.at(0) > '9'))
    {
        std::cout << "char: " << str << std::endl;
        this->_type = 1;
        this->_find_pars_type = true;
        return ;
    }
    if (str.at(0) == '-' || str.at(0) == '+')
        i++;
    while (i < len)
    {
        if (str.at(i) == 'f' && (i + 1 == len) && std::isdigit(str.at(i - 1)))
        {
            std::cout << "float: " << str << std::endl;
            this->_type = 3;
            this->_find_pars_type = true;
            return;
        }
        else if (str.at(i) == '.')
        {
            if (!is_double)
                is_double = true;
            else
                return ;
        }
        else if (!std::isdigit(str.at(i)))
        {
            std::cout << "Impossible" << std::endl;
            return;
        }
        i++;
    }
    if (is_double)
    {
        std::cout << "double: " << str << std::endl;
        this->_type = 4;
        this->_find_pars_type = true;
    }
    else
    {
        std::cout << "int: " << str << std::endl;
        this->_type = 2;
        this->_find_pars_type = true;
    }
}

void ConvertScal::convert(std::string str)
{
    switch (this->_type)
    {
        case 0:
            std::cout << "Wrong input" << std::endl;
            break;
        case 1:
            std::cout << "CHAR " << std::endl;
            this->print_char(str);
            break;
        case 2:
            std::cout << "INT " << std::endl;
            break;
        case 3:
            std::cout << "FLOAT " << std::endl;
            break;
        case 4:
            std::cout << "DOUBLE " << std::endl;
            break;
        case 5:
            std::cout << "INF" << std::endl;
            break;
        case 6:
            std::cout << "NAN" << std::endl;
            break;
        default:
        std::cout << "Error" << std::endl;
    }
}

void ConvertScal::print_char(std::string str) const
{
    char c;
    
    c = str.at(0);
    if (std::isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}
