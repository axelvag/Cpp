/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:33:10 by axel              #+#    #+#             */
/*   Updated: 2023/08/10 19:03:10 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

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