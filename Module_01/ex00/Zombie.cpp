/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:07:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 14:50:23 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "\033[32m" << this->name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

Zombie *newZombie(std::string name)
{
    return (new Zombie(name));
}

void randomChump(std::string name)
{
    Zombie Zombie(name);
    Zombie.announce();
}
