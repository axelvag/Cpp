/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:29 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/04 15:09:23 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

Bitcoin::Bitcoin(void)
{
}

Bitcoin::~Bitcoin(void)
{
}

Bitcoin::Bitcoin(const std::string &data)
{
    std::ifstream database(data.c_str());

    if (!database.is_open())
        throw (DataError());
    std::cout << "Data opened" << std::endl;
    parseData(database);
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
        price = line.substr(line.find(',') + 1, line.size());
        // std::cout << date << " " << price << std::endl;
        parseDataLine(line, date, price);
    }
    if (_map.size() == 0)
        throw (DataError());
}

void Bitcoin::parseDataLine(std::string &line, std::string &date, std::string &price)
{
    (void)line;
    std::cout << date << " " << price << std::endl;
    // _map.insert(std::pair<std::string, std::string>(date, price));
}