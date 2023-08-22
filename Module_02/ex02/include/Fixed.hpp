/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/22 16:09:06 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    
private:
    int integer;
    static int const nb_of_bit = 8;
public:
    Fixed(void);
    ~Fixed();
    Fixed(const Fixed &copy);
    Fixed(const int convert);
    Fixed(const float convert);
    Fixed &operator=(const Fixed &assignment);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    bool    operator>(Fixed fixed) const;
    bool    operator<(Fixed fixed) const;
    bool    operator>=(Fixed fixed) const;
    bool    operator<=(Fixed fixed) const;
    bool    operator==(Fixed fixed) const;
    bool    operator!=(Fixed fixed) const;

    float    operator+(Fixed fixed) const;
    float    operator-(Fixed fixed) const;
    float    operator*(Fixed fixed) const;
    float    operator/(Fixed fixed) const;

    Fixed   operator++();
    Fixed   operator++(int);
    Fixed   operator--();
    Fixed   operator--(int);

    static Fixed &min(Fixed &left, Fixed &right);
    static const Fixed &min(const Fixed &left, const Fixed &right);
    static Fixed &max(Fixed &left, Fixed &right);
    static const Fixed &max(const Fixed &left, const Fixed &right);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif