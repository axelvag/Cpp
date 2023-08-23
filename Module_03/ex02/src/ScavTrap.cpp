/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:33:07 by axel              #+#    #+#             */
/*   Updated: 2023/08/23 15:21:27 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
    this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = assignment._name;
    this->_hit = assignment._hit;
    this->_energy = assignment._energy;
    this->_attack = assignment._attack;
    return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " guard a fictive gate !!!!!! " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}