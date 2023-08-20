/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/08/10 19:06:52 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

template <typename T>
void    ft_iter(T val)
{
    std::cout << val << std::endl;
}

int main(void)
{   
    std::string array_string[] = {"123", "abc"};
    ::iter(array_string, 2, ft_iter);

    int array_int[] = {10, 20};
    ::iter(array_int, 2, ft_iter);

    char array_char[] = {'z', 'y', 'x', 'w'};
    ::iter(array_char, 4, ft_iter);
    
    return (0);
}