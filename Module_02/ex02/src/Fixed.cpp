/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:33 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/22 16:12:20 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    this->integer = 0;
    return ;
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
	return (*this);
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

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return (out);
}

bool    Fixed::operator>(Fixed fixed) const
{
    return (this->toFloat() > fixed.toFloat());
}

bool    Fixed::operator<(Fixed fixed) const
{
    return (this->toFloat() < fixed.toFloat());
}

bool    Fixed::operator>=(Fixed fixed) const
{
    return (this->toFloat() >= fixed.toFloat());
}

bool    Fixed::operator<=(Fixed fixed) const
{
    return (this->toFloat() <= fixed.toFloat());
}

bool    Fixed::operator==(Fixed fixed) const
{
    return (this->toFloat() == fixed.toFloat());
}

bool    Fixed::operator!=(Fixed fixed) const
{
    return (this->toFloat() != fixed.toFloat());
}

float    Fixed::operator+(Fixed fixed) const
{
    return (this->toFloat() + fixed.toFloat());
}

float    Fixed::operator-(Fixed fixed) const
{
    return (this->toFloat() - fixed.toFloat());
}

float    Fixed::operator*(Fixed fixed) const
{
    return (this->toFloat() * fixed.toFloat());
}

float    Fixed::operator/(Fixed fixed) const
{
    return (this->toFloat() / fixed.toFloat());
}

Fixed   Fixed::operator++()
{
    this->integer++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed   Fixed::operator--()
{
    this->integer--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
    if (left.toFloat() <= right.toFloat())
        return (left);
    else
        return (right);
}

const Fixed &Fixed::min(const Fixed &left, const Fixed &right)
{
    if (left.toFloat() <= right.toFloat())
        return (left);
    else
        return (right);
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
    if (left.toFloat() >= right.toFloat())
        return (left);
    else
        return (right);
}

const Fixed &Fixed::max(const Fixed &left, const Fixed &right)
{
    if (left.toFloat() >= right.toFloat())
        return (left);
    else
        return (right);
}