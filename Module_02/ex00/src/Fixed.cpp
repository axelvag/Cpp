/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:33 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/01 11:05:01 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    integer = 0;
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
    
}