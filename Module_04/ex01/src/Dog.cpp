/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 11:22:52 by avaganay         ###   ########.fr       */
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

void    Dog::makeSound(void) const
{
    std::cout << "WAFWAF !!!" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}
