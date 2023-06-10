/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:38:43 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/10 16:54:59 by avaganay         ###   ########.fr       */
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
	this->add_use = 0;
	std::cout << "\033[32m" << " Phone Book" << "\033[0m" << std::endl;
	std::cout << "\033[33m" << " Enter your command :" << "\033[0m" << std::endl;
	std::cout << " [HELP, ADD, SEARCH, EXIT]" << std::endl;
}

void PhoneBook::help(void)
{
	std::cout << " [ADD]" << "\033[33m" << " : register a new contact" << "\033[0m" << std::endl;
	std::cout << " [SEARCH]" << "\033[33m" << " : display all contact" << "\033[0m" << std::endl;
	std::cout << " [EXIT]" << "\033[33m" << " : close the Phone Book" << "\033[0m" << std::endl;
}

void PhoneBook::add(void)
{
    static int  i;
	
	this->add_use = 1;
    this->contact_lst[i % 8].contact_init(i % 8);
    i++;
}

int PhoneBook::contact_search()
{
	int	id;
	int	work;

	id = -1;
	work = 1;
	while (work)
	{
		std::cin.clear();
		std::cout << "Search a contact between  1 and 8 :" << std::endl;
		std::cin >> id;
		if (id >= atoi("1") && id <= atoi("8"))
			work = 0;
	}
	return (id - 1);
}

void PhoneBook::search(void)
{
	int	i;
	int	id;
	
	i = 0;
	if (this->add_use == 0)
	{
		std::cout << "\033[34m" << "---------- PHONE BOOK CONTACTS EMPTY ----------" << "\033[0m" << std::endl;
		return ;
	}
    std::cout << "\033[34m" << "------------ PHONE BOOK CONTACTS ------------" << "\033[0m" << std::endl;
	while (i < 8)
	{
        this->contact_lst[i].contact_print(i);
		i++;
    }
    std::cout << std::endl;
	id = contact_search();
	this->contact_lst[id].contact_print_search(id);
}
