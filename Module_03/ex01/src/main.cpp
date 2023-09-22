/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/24 11:15:51 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ScavTrap.hpp"

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


    std::cout << std::endl;
    ScavTrap guardian("Guardian");
    
    guardian.attack("Troll");
    guardian.takeDamage(5);
    guardian.beRepaired(5);
    guardian.guardGate();

    return 0;
}