/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:33:10 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 11:25:48 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    ft_iter(T val)
{
    std::cout << val << std::endl;
}

template <typename T>
void    iter(T *array, int size, void ft_iter(T))
{
    int i;

    i = 0;
    while (i < size)
    {
        ft_iter(array[i]);
        i++;
    }
}

#endif