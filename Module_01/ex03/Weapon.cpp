/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:22:02 by axel              #+#    #+#             */
/*   Updated: 2023/08/01 15:29:01 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void)
{
    return (this->type);
}

void	Weapon::setType(std::string type)
{
    this->type = type;
}
