/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/23 13:54:20 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.hpp"

int main( void )
{
    ClapTrap knight("Knight");

    knight.attack("Goblin");
    std::cout << "Goblin attack" << std::endl;
    knight.takeDamage(5);
    knight.beRepaired(8);
    std::cout << "Goblin attack" << std::endl;
    knight.takeDamage(5);
    std::cout << "Goblin attack" << std::endl;
    knight.takeDamage(5);
    knight.beRepaired(8);
    return 0;
}