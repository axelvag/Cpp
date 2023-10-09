/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:29 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/09 14:59:18 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

Bitcoin::Bitcoin(void)
{
}
Bitcoin::Bitcoin(const std::string &data)
{
    std::ifstream database(data.c_str());

    if (!database.is_open())
        throw (DataError());
    parseData(database);
}

Bitcoin::~Bitcoin(void)
{
}

Bitcoin::Bitcoin(const Bitcoin &copy)
{
    *this = copy;
}

Bitcoin &Bitcoin::operator=(const Bitcoin &assigment)
{
    if (this != &assigment)
    {
        this->_map = assigment._map;
    }
    return (*this);
}

int Bitcoin::isOnlyDigit(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str.at(i)))
            return (1);
    }
    return (0);
}

void Bitcoin::parseData(std::ifstream &data)
{
    std::string line;
    std::string date;
    std::string price;

    std::getline(data, line);
    while (std::getline(data, line))
    {
        date = line.substr(0, line.find(','));
        price = line.substr(line.find(',') + 1, line.size() + 1);
        parseDataLine(date, price);
    }
    if (_map.size() == 0)
        throw (DataError());
}

void Bitcoin::parseDataLine(std::string &date, std::string &price)
{
    double value;
    
    try
    {
        dataIsValid(date, price);
        if (dateIsValid(date))
            throw (DataError());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    value = atof(price.c_str());
    _map.insert(std::pair<std::string, double>(date, value));
}

void Bitcoin::dataIsValid(std::string date, std::string price)
{
    int doublepoint = -1;
    
    if (date.size() != 10)
        throw (DataError());
    if (price.size() == 0)
        throw (DataError());
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
        {
            if (date[i] != '-')
                throw (DataError());
        }
        else if (date[i] < '0' || date[i] > '9')
            throw (DataError());
    }
    for (int i = 0; i < (int)price.size(); i++)
    {
        if (price[i] == '.')
            doublepoint++;
        if ((price[i] < '0' || price[i] > '9') && price[i] != '.')
            throw (DataError());
    }
    if (doublepoint > 0)
        throw (DataError());
}

int Bitcoin::dateIsValid(std::string date)
{
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    int y = atoi(year.c_str());
    int m = atoi(month.c_str());
    int d = atoi(day.c_str());

    if (date.length() != 10 || date.at(4) != '-' || date.at(7) != '-')
        return (1);
    if (isOnlyDigit(year) || isOnlyDigit(month) || isOnlyDigit(day))
        return (1);
    if (isLeapYear(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())))
        return (1);
    if ((y == 2022 && m > 3) || (y == 2022 && m == 3 && d > 29) || y > 2022)
        return (1);
    return (0);
}

int Bitcoin::isLeapYear(const int y, const int m, const int d)
{
    if (m < 1 || m > 12 || d < 1 || d > 31 || y < 2009 || y > 9999)
        return (1);
    if (m == 2)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            if (d > 29)
                return (1);
        }
        else
            if (d > 28)
                return (1);
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
        if (d > 30)
            return (1);
    return (0);
}

int Bitcoin::numberIsValid(std::string nb)
{
    size_t i = 0;
    
    while (i < nb.length())
    {
        if (nb[i] < '0' || nb[i] > '9')
            return (1);
        i++;
    }
    if (nb.length() > 4 || atoi(nb.c_str()) > 1000)
        throw (LargeNumberError());
    if (atoi(nb.c_str()) < 0)
        throw (NegativeNumberError());
    if (nb.length() == 0)
        return (1);
    return (0);
}

void    Bitcoin::parsInput(const std::string input)
{
    std::ifstream input_file(input.c_str());
    std::string line;

    if (!input_file.is_open())
        throw (FileError());
    getline(input_file, line);
    while (getline(input_file, line))
    {
        try
        {
            calculate(line);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << " " << "\"" << line << "\"" << '\n';
        }
    }
}

void Bitcoin::calculate(const std::string line)
{
    size_t separator = line.find('|');
    std::string date;
    std::string nb;
    double number;
    
    if (separator == line.npos)
        throw (FileError());
    date = line.substr(0, separator);
    date = trim(date);
    if (dateIsValid(date))
        throw (FileError());
    nb = line.substr(separator + 1, line.size() + 1);
    nb = trim(nb);
    if (numberIsValid(nb))
        throw (FileError());
    number = atof(nb.c_str());
    std::map<std::string, double>::iterator it = _map.lower_bound(date);
    std::cout << date << " => " << nb << " = " << it->second * number << std::endl;
}

std::string &Bitcoin::trim(std::string &str)
{
    return (rtrim(ltrim(str)));
}

std::string &Bitcoin::ltrim(std::string &str)
{
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
    return (str);
}

std::string &Bitcoin::rtrim(std::string &str)
{
    str.erase(std::find_if(str.rbegin(), str.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), str.end());
    return (str);
}