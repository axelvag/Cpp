/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:35:04 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/09 17:18:13 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    int work;
    PhoneBook PhoneBook;
    std::string cmd;
    // std::ifstream is;
    
    work = 1;
    PhoneBook.start();
    while (work)
    {
        std::cout << ">";
		std::getline(std::cin, cmd);
        if (cmd == "EXIT")
        {
            std::cout << " PhoneBook Close" << std::endl;
            work = 0;
        }
        if (cmd == "HELP")
            PhoneBook.help();
        if (std::cin.eof() == 1)
            exit(1);
    }
    return (0);
}