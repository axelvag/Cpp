/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/09/18 15:32:59 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "Default constructor WrongCat called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "Copy constructor WrongCat called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assignment)
{
	this->type = assignment.type;
	return (*this);
}

void    WrongCat::makeSound(void)
{
    std::cout << "MIAOU !!!" << std::endl;
}