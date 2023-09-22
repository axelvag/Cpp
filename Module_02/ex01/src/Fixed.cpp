/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:33 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/24 13:22:15 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    integer = 0;
}

Fixed::Fixed(const int convert)
{
    std::cout << "Int constructor called" << std::endl;
    this->integer = convert << this->nb_of_bit;
}

Fixed::Fixed(const float convert)
{
    std::cout << "Float constructor called" << std::endl;
    this->integer = roundf(convert * (1 << this->nb_of_bit));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->integer = assignment.integer;
	return *this;
}

int Fixed::getRawBits(void) const
{
    return (this->integer);
}

void Fixed::setRawBits(int const raw)
{
    this->integer = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->integer / (1 << this->nb_of_bit));
}

int Fixed::toInt(void) const
{
    return(this->integer >> this->nb_of_bit);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}