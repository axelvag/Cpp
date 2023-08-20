/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:41:45 by axel              #+#    #+#             */
/*   Updated: 2023/08/10 19:00:05 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//fonctions template pour que leurs arg soient non-typé
template <typename T>
void    swap(T &left, T &right)
{
    T   tmp;
    tmp = left;
    left = right;
    right = tmp;
}

template <typename T>
T min(T left, T right)
{
    if (left < right)
        return (left);
    else
        return (right);
}

template <typename T>
T max(T left, T right)
{
    if (left > right)
        return (left);
    else
        return (right);
}

#endif