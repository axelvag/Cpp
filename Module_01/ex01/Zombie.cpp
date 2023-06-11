/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:07:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 20:23:06 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie(void)
{
    this->name = "(null)";
	std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "\033[32m" << this->name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

void    Zombie::init(std::string name)
{
    this->name = name;
}
