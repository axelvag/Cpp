/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:40:47 by axel              #+#    #+#             */
/*   Updated: 2023/08/21 16:51:44 by avaganay         ###   ########.fr       */
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
    std::cout << "\033[31m" << "Debug" << "\033[0m" << ", I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "\033[31m" << "Info" << "\033[0m" << ", I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "\033[31m" << "Warning" << "\033[0m" << ", I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "\033[31m" << "Error" << "\033[0m" << ", this is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string statue)
{
    void (Harl::*choose_tab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if (statue == "DEBUG")
        return (this->*choose_tab[0])();
    else if (statue == "INFO")
        return (this->*choose_tab[1])();
    else if (statue == "WARNING")
        return (this->*choose_tab[2])();
    else if (statue == "ERROR")
        return (this->*choose_tab[3])();
}