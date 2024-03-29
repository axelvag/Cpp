/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:16:48 by axel              #+#    #+#             */
/*   Updated: 2023/09/28 14:55:14 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ConvertScal.hpp"

ConvertScal::ConvertScal(void)
{
    std::cout << "Default constructor ConvertScal called" << std::endl;
}

ConvertScal::ConvertScal(const ConvertScal &copy)
{
    std::cout << "Copy constructor ConvertScal called" << std::endl;
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
        (void)assigment;
    }
    return *this;
}

void    ConvertScal::parsTypeNanInfChar(std::string str, int len, int &_type, bool &_find_pars_type)
{
    if (str == "nan" || str == "nanf")
    {
        _type = 6;
        _find_pars_type = true;
        return;
    }
    else if (str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
    {
        _type = 5;
        _find_pars_type = true;
        return;
    }
    if (len == 1 && (str.at(0) < '0' || str.at(0) > '9'))
    {
        _type = 1;
        _find_pars_type = true;
        return ;
    }
}

void    ConvertScal::parsType(std::string str, int &_type, bool &_find_pars_type)
{
    int i = 0;
    int len = str.length();
    bool is_double = false;
    
    ConvertScal::parsTypeNanInfChar(str, len, _type, _find_pars_type);
    if (str.at(0) == '-' || str.at(0) == '+')
        i++;
    while (i < len)
    {
        if (str.at(i) == 'f' && (i + 1 == len) && std::isdigit(str.at(i - 1)))
        {
            _type = 3;
            _find_pars_type = true;
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
            return;
        i++;
    }
    if (is_double)
    {
        _type = 4;
        _find_pars_type = true;
    }
    else
    {
        _type = 2;
        _find_pars_type = true;
    }
}

void ConvertScal::convert(std::string str, int _type)
{
    switch (_type)
    {
        case 0:
            std::cout << "Wrong input: Impossible" << std::endl;
            break;
        case 1:
            ConvertScal::printChar(str);
            break;
        case 2:
            ConvertScal::printInt(str);
            break;
        case 3:
            ConvertScal::printFloat(str);
            break;
        case 4:
            ConvertScal::printDouble(str);
            break;
        case 5:
            ConvertScal::printInf(str);
            break;
        case 6:
            ConvertScal::printNan(str);
            break;
        default:
            std::cout << "Error" << std::endl;
    }
}

void ConvertScal::printChar(std::string str)
{
    char c = str.at(0);
    
    if (std::isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ConvertScal::printInt(std::string str)
{
    int i = atoi(str.c_str());
    
    if (i <= 126 && i >= 32)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else if ((i >= 0 && i <= 31) || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << str << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void ConvertScal::printFloat(std::string str)
{
    double d = atof(str.c_str());
    int i = atoi(str.c_str());

    if (i <= 126 && i >= 32)
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else if ((i >= 0 && i <= 31) || i == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
		std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    if (str.find('.') == std::string::npos)
        std::cout << "float: " << d << ".0f" << std::endl;
    else
        std::cout << "float: " << str << std::endl;
    if (d == static_cast<int>(d))
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

void ConvertScal::printDouble(std::string str)
{
    double d = atof(str.c_str());
    int i = atoi(str.c_str());
    
    if (i <= 126 && i >= 32)
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else if ((i >= 0 && i <= 31) || i == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
		std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    if (d == static_cast<int>(d))
        std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    if (d == static_cast<int>(d))
        std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(d) << std::endl;
}

void ConvertScal::printInf(std::string str)
{
    double d = atof(str.c_str());

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void ConvertScal::printNan(std::string str)
{
    double d = atof(str.c_str());

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}
