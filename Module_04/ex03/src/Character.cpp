/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:55:41 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/05 16:24:57 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void)
{
    std::cout << "Default constructor Character called" << std::endl;
    this->_name = "";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}


Character::Character(std::string name)
{
	std::cout << "Name constructor Character called" << std::endl;
    this->_name = name;
	for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
    std::cout << "Copy constructor Character called" << std::endl;
    *this = copy;
}

Character &Character::operator=(const Character &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assignment)
        return (*this);
    // this->_name = assignment._name;
    // this->_inventory = assignment._inventory;
    return *this;
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 0 && idx < 3)
        this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 0 && idx < 3)
        this->_inventory[idx]->use(target);
}