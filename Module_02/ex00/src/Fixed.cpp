/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:33 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/03 12:42:23 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    integer = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    // integer = copy.integer;
    *this = copy;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assignment)
        this->integer = assignment.getRawBits();
    // else
	    // this->integer = assignment.integer;
	return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->integer);
}

void Fixed::setRawBits(int const raw)
{
    this->integer = raw;
}