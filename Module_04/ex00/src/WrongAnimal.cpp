/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:43:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 11:23:47 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Default constructor WrongAnimal called" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy constructor WrongAnimal called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = assignment.type;
    return *this;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "The sound make by a WrongAnimal" << std::endl;
}

const std::string   &WrongAnimal::getType(void) const
{
    return (this->type);
}