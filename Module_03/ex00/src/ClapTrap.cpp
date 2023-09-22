/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:33 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/24 08:33:04 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = name;
    this->_hit = 10;
    this->_energy = 10;
    this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = assignment._name;
    this->_hit = assignment._hit;
    this->_energy = assignment._energy;
    this->_attack = assignment._attack;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit == 0 || this->_energy == 0)
    {
        std::cout << this->_name << " can't attack" << std::endl;
        return;
    }
    this->_energy -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit -= amount;
    if (this->_hit <= 0)
    {
        this->_hit = 0;
        std::cout << this->_name << " take " << amount << " damage !" << std::endl;
        std::cout << this->_name << " is dead." << std::endl;
    }
    else
    {
        std::cout << this->_name << " take " << amount << " damage !" << std::endl;
        std::cout << this->_name << " have " << this->_hit << " life point." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit == 0 || this->_energy == 0)
    {
        std::cout << this->_name << " can't heal" << std::endl;
        return;
    }
    this->_hit += amount;
    this->_energy -= 1;
    if (this->_hit > 10)
    {
        std::cout << this->_name << " heal is life point in their max !" << std::endl;
        this->_hit = 10;
    }
    else
    {
        std::cout << this->_name << " heal " << amount << " life point !" << std::endl;
    }
}