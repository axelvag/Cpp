/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:35:04 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/14 13:18:57 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    int work;
    PhoneBook PhoneBook;
    std::string cmd;
    
    work = 1;
    PhoneBook.start();
    while (work)
    {
        std::cout << ">";
		std::getline(std::cin, cmd);
        if (cmd == "EXIT")
        {
            std::cout << "\033[32m" << " Phone Book Close" << "\033[0m" << std::endl;
            work = 0;
        }
        else if (cmd == "HELP")
            PhoneBook.help();
        else if (cmd == "ADD")
            PhoneBook.add();
        else if (cmd == "SEARCH")
            PhoneBook.search();
        if (std::cin.eof() == 1)
            exit(1);
    }
    return (0);
}