/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:33:07 by axel              #+#    #+#             */
/*   Updated: 2023/08/24 11:16:24 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
{
    std::cout << "Default constructor FragTrap called" << std::endl;
    this->_name = name;
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = assignment._name;
    this->_hit = assignment._hit;
    this->_energy = assignment._energy;
    this->_attack = assignment._attack;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " touch your hand !!!!!! " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}