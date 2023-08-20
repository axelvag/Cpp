/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/04 19:48:25 by axel             ###   ########.fr       */
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
    // std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

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
    Fixed   operator--();

    Fixed &min(Fixed &left, Fixed &right);
    const Fixed &min(const Fixed &left, const Fixed &right);
    Fixed &max(Fixed &left, Fixed &right);
    const Fixed &max(const Fixed &left, const Fixed &right);
};

#endif