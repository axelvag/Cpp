/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:31:44 by axel              #+#    #+#             */
/*   Updated: 2023/08/21 14:03:17 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weaponB = NULL;
}

HumanB::~HumanB(void)
{
}

void    HumanB::setWeapon(Weapon &club)
{
    this->weaponB = &club;
}

void	HumanB::attack(void) const
{
    if (this->weaponB == NULL)
	    std::cout << this->name << " attacks with nothing" << std::endl;
    else
	    std::cout << this->name << " attacks with his " << this->weaponB->getType() << std::endl;
}