/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/09/18 15:31:01 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Default constructor Cat called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

Cat::~Cat(void)
{
    std::cout << "Destructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &assignment)
{
	this->type = assignment.type;
	return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "MIAOU !!!" << std::endl;
}