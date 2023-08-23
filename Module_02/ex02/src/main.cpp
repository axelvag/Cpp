/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/23 09:02:56 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c(3.5f);
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << std::endl;
    std::cout << "b / 2 :" << b / Fixed(2) << std::endl; // 5.05078
	std::cout << "b - 3.14 :" << b + Fixed(-3.14f) << std::endl; // 6.96094
	std::cout << "c != a :" << (c != a) << std::endl; // 1
	std::cout << "c == a :" << (c == a) << std::endl; // 0

    std::cout << std::endl;
    std::cout << "Max :" << Fixed::max( a, b ) << std::endl;
    std::cout << "Min :" << Fixed::min( a, b ) << std::endl;
    std::cout << "Max const with 3.5 :" << Fixed::max( c, b ) << std::endl;
    std::cout << "Min const with 3.5 :" << Fixed::min( c, b ) << std::endl;
    
    return 0;
}