/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:31:44 by axel              #+#    #+#             */
/*   Updated: 2023/08/01 16:05:43 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weaponA)
{
    this->name = name;
    this->weaponA = weaponA;
}

HumanA::~HumanA(void)
{
}
void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << std::endl; //<< this->weaponA.getType() << std::endl;
}