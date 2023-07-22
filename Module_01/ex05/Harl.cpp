/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:40:47 by axel              #+#    #+#             */
/*   Updated: 2023/07/18 20:26:05 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::choose(std::string statue)
{
    void (Harl::*choose_tab[4])(void) = 
    {&Harl::debug(), &Harl::info(), &Harl::warning(), &Harl::error()};
    if (statue == "DEBUG")
        return (this->*choose_tab[0]);
    else if (statue == "INFO")
        return (this->*choose_tab[1]);
    else if (statue == "WARNING")
        return (this->*choose_tab[2]);
    else if (statue == "ERROR")
        return (this->*choose_tab[3]);
}