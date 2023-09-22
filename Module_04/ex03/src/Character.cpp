/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:55:41 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/18 14:53:32 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void)
{
    std::cout << "Default constructor Character called" << std::endl;
    this->_name = "";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        this->_fall[i] = NULL;
}


Character::Character(std::string name)
{
	std::cout << "Name constructor Character called" << std::endl;
    this->_name = name;
	for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        this->_fall[i] = NULL;
}

Character::~Character(void)
{
    std::cout << "Destructor Character called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_fall[i])
            delete this->_fall[i];
    }
}

Character::Character(const Character &copy)
{
    std::cout << "Copy constructor Character called" << std::endl;
    *this = copy;
}

Character &Character::operator=(const Character &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (assignment._inventory[i])
			this->_inventory[i] = (assignment._inventory[i])->clone();
        else
            this->_inventory[i] = NULL;
	}
	return (*this);
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
    std::cout << "Inventory full, materia fall" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_fall[i] == NULL)
        {
            this->_fall[i] = m;
            return ;
        }
    }
    std::cout << "Fall inventory full, materia lost" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_fall[i] != NULL)
            delete this->_fall[i];
    }
}

void Character::printInventory(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            std::cout << "Inventory " << i << " is type " << this->_inventory[i]->getType() << std::endl;
        else
            std::cout << "Inventory " << i << " is empty" << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        std::cout << "Unequipe impossible" << std::endl;
    if (this->_inventory[idx] != NULL)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_fall[i] == NULL)
            {
                this->_fall[i] = this->_inventory[idx];
                this->_inventory[idx] = NULL;
                return ;
            }
        }
    }
    this->_inventory[idx] = NULL;
    std::cout << "Fall inventory full, materia lost" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_fall[i] != NULL)
            delete this->_fall[i];
    }
}

void Character::printFall(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_fall[i])
            std::cout << "Fall inventory " << i << " is type " << this->_fall[i]->getType() << std::endl;
        else
            std::cout << "Fall inventory " << i << " is empty" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target)
{
    // std::cout << "Character use called" << std::endl;
    // std::cout << idx << std::endl;
    // std::cout << target.getName() << std::endl;
    if (idx >= 0 && idx <= 3)
    {
        // std::cout << this->_inventory[idx]->getType() << std::endl;
        this->_inventory[idx]->use(target);   
    }
}
