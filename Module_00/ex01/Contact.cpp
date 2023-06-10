/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:23:53 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/10 16:13:02 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void    Contact::contact_init(int i)
{
    this->id = i;
    std::cout << "\033[33m" << " First Name :" << "\033[0m" << std::endl;
    std::cin >> this->first_name;
    std::cout << "\033[33m" << " Last Name :" << "\033[0m" << std::endl;
    std::cin >> this->last_name;
    std::cout << "\033[33m" << " Nickname :" << "\033[0m" << std::endl;
    std::cin >> this->nickname;
    std::cout << "\033[33m" << " Phone Number :" << "\033[0m" << std::endl;
    std::cin >> this->phone_nb;
    std::cout << "\033[33m" << " Darkest Secret :" << "\033[0m" << std::endl;
    std::cin >> this->darkest_secret;
}

std::string Contact::contact_print_len(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::contact_print(int id)
{
    if (this->first_name.empty())
        return ;
    std::cout << "\033[34m" << "|" << "\033[0m" << std::setw(10) << id + 1 << "\033[34m";
    std::cout << "|" << "\033[0m" << std::setw(10) << this->contact_print_len(this->first_name) << "\033[34m";
    std::cout << "|" << "\033[0m" << std::setw(10) << this->contact_print_len(this->last_name) << "\033[34m";
    std::cout << "|" << "\033[0m" << std::setw(10) << this->contact_print_len(this->nickname) << "\033[34m";
    std::cout << "|" << "\033[0m" << std::endl;
}