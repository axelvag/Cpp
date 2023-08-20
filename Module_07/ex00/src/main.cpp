/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/08/10 17:24:41 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "swap " << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "swap " << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout <<"max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << std::endl;

    char e = 'e';
    char f = 'f';
    
    ::swap(e, f);
    std::cout << "swap " << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout <<"max( e, f ) = " << ::max( e, f ) << std::endl;
    std::cout << std::endl;
    
    float g = 4.2f;
    float h = 42.0f;
    
    ::swap(g, h);
    std::cout << "swap " << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout <<"max( g, h ) = " << ::max( g, h ) << std::endl;
    
    return (0);
}