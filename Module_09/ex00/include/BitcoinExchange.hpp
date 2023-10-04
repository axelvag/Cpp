/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:36 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/04 13:54:43 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <map>
#include <fstream>

class Bitcoin
{

private:
    std::map<std::string, float> _map;
    std::string _file;
    
public:
    Bitcoin();
    ~Bitcoin();
    Bitcoin(const std::string &data);
    void parseData(std::ifstream &data);
    void parseDataLine(std::string &line, std::string &date, std::string &price);

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