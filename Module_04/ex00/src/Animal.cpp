/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:43:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/29 13:20:23 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Default constructor Animal called" << std::endl;
    this->type = "";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assignment)
        return (*this);
    this->type = assignment.type;
    return *this;
}

void    Animal::makeSound(void) const
{
    std::cout << "The sound make by a Animal" << std::endl;
}

const std::string   &Animal::getType(void) const
{
    return (this->type);
}