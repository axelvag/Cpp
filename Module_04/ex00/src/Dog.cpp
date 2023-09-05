/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/08/28 09:29:43 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Default constructor Dog called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << "Destructor Dog called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "WAFWAF !!!" << std::endl;
}