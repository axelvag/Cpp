/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/09/19 15:05:29 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Default constructor Dog called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Destructor Dog called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &assignment)
{
	this->type = assignment.type;
    this->brain = new Brain(*assignment.brain);
	return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "WAFWAF !!!" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}
