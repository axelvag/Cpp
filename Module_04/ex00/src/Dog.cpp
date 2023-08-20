/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/08/06 11:24:10 by axel             ###   ########.fr       */
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

void    Dog::makeSound(void)
{
    std::cout << "WAFWAF !!!" << std::endl;
}