/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:43:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 09:39:04 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "Default constructor AAnimal called" << std::endl;
    this->type = "";
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "Copy constructor AAnimal called" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Destructor AAnimal called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assignment)
        return (*this);
    this->type = assignment.type;
    return *this;
}

void    AAnimal::makeSound(void) const
{
    std::cout << "The sound make by a AAnimal" << std::endl;
}

const std::string   &AAnimal::getType(void) const
{
    return (this->type);
}

Brain *AAnimal::getBrain(void) const
{
    return (NULL);
}