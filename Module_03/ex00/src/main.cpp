/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/04 19:29:50 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ClapTrap.hpp"

int main( void )
{
    ClapTrap knight("knight");

    knight.attack("Goblin");
    std::cout << "Goblin attack" << std::endl;
    knight.takeDamage(5);
    knight.beRepaired(8);
    knight.takeDamage(5);
    knight.takeDamage(5);
    knight.beRepaired(8);
    return 0;
}