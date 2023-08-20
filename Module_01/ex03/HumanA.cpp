/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:31:44 by axel              #+#    #+#             */
/*   Updated: 2023/08/14 22:27:36 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : weaponA(weaponA)
{
    this->name = name;

}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weaponA.getType() << std::endl;
}