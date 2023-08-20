/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/04 19:47:32 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    
private:
    int integer;
    static int const nb_of_bit = 8;
public:
    Fixed(void);
    ~Fixed();
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &assignment);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif