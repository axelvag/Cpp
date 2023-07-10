/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:22:02 by axel              #+#    #+#             */
/*   Updated: 2023/07/10 11:16:42 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    (void)type;
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

void	Weapon::setType(std::string type)
{
    this->type = type;
}