/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:38:43 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/09 17:24:33 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::start(void)
{
	std::cout << " Phone Book" << std::endl;
	std::cout << " Enter your command :" << std::endl;
	std::cout << " [HELP, ADD, SEARCH, EXIT]" << std::endl;
}

void PhoneBook::help(void)
{
	std::cout << " [ADD] : register a new contact" << std::endl;
	std::cout << " [SEARCH] : display all contact" << std::endl;
	std::cout << " [EXIT] : close the Phone Book" << std::endl;
}