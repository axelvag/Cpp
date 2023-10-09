/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:36 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/09 14:28:39 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <map>
#include <fstream>
#include <string>

class Bitcoin
{

private:
    std::map<std::string, double> _map;
    
public:
    Bitcoin();
    ~Bitcoin();
    Bitcoin(const std::string &data);
    Bitcoin(const Bitcoin &copy);
    Bitcoin &operator=(const Bitcoin &assigment);
    
    int isOnlyDigit(std::string str);
    void parseData(std::ifstream &data);
    void parseDataLine(std::string &date, std::string &price);
    void dataIsValid(std::string date, std::string price);
    int dateIsValid(std::string date);
    int isLeapYear(const int y, const int m, const int d);
    int numberIsValid(std::string nb);

    void    parsInput(const std::string input);
    void    calculate(const std::string line);

    std::string &trim(std::string &str);
    std::string &ltrim(std::string &str);
    std::string &rtrim(std::string &str);

    class FileError : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Error: bad input");
        }
    };
    class DataError : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Error: Data Error]");
        }
    };
    class NegativeNumberError : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Error: not a positive number.");
        }
    };
    class LargeNumberError : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("Error: too large a number.");
        }
    };


};

#endif