/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:33 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/03 12:32:51 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    integer = 0;
}

Fixed::Fixed(const int convert)
{
    this->integer = convert << this->nb_of_bit;
}

Fixed::Fixed(const float convert)
{
    this->integer = roundf(convert * (1 << this->nb_of_bit));
}

Fixed::Fixed(const Fixed &copy)
{
    integer = copy.integer;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &assignment)
{
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
    return ((float)this->integer / (float)(1 >> this->nb_of_bit));
}

int Fixed::toInt(void) const
{
    return(this->integer >> this->nb_of_bit);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return (out);
}