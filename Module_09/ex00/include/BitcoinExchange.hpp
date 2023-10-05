/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:36 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/05 16:17:57 by avaganay         ###   ########.fr       */
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
    std::map<std::string, float> _map;
    
public:
    Bitcoin();
    ~Bitcoin();
    Bitcoin(const std::string &data);
    Bitcoin(const Bitcoin &copy);
    Bitcoin &operator=(const Bitcoin &assigment);
    
    int isOnlyDigit(std::string str);
    void parseData(std::ifstream &data);
    void parseDataLine(std::string &date, std::string &price);
    void DataIsValid(std::string date, std::string price);
    int DateIsValid(std::string date);
    void isLeapYear(const int y, const int m, const int d);

    void    parsInput(const std::string input);
    void    calculate(const std::string line);

    std::string &trim(std::string &str);
    std::string &ltrim(std::string &str);
    std::string &rtrim(std::string &str);

    class FileError : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("[File Error]");
        }
    };
    class DataError : public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("[Data Error]");
        }
    };


};

#endif