/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:32:44 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 15:13:57 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    
    std::cout << "\033[33m" << "Name your first Zombie in stack : " << "\033[0m" << std::endl;
    std::cin >> name;
    Zombie Zombie1(name);
    Zombie1.announce();

    std::cout << "\033[33m" << "Name your second Zombie in heap : " << "\033[0m" << std::endl;
    std::cin >> name;
    Zombie *Zombie2;
    Zombie2 = newZombie(name);
    Zombie2->announce();
    
    std::cout << "\033[33m" << "Name your third Zombie random : " << "\033[0m" << std::endl;
    std::cin >> name;
    randomChump(name);
    
    delete Zombie2;
    return (0);
}