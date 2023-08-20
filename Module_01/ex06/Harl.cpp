/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:40:47 by axel              #+#    #+#             */
/*   Updated: 2023/08/03 10:12:08 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "Debug return" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Info return" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Warning return" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "Error return" << std::endl;
}

void    Harl::complain(std::string statue)
{
    void (Harl::*choose_tab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
	while (i < 4)
	{
		if (level[i] == statue)
			break ;
        i++;
	}
    switch (i)
    {
        case 0:
            (this->*choose_tab[0])();
        case 1:
            (this->*choose_tab[1])();
        case 2:
            (this->*choose_tab[2])();
        case 3:
            (this->*choose_tab[3])();
            break;
        default:
            std::cout << "Error doesn't exist Harl is happy" << std::endl;
            break;
    }
}