/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/08/05 18:39:23 by axel             ###   ########.fr       */
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

void    Cat::makeSound(void)
{
    std::cout << "MIAOU !!!" << std::endl;
}