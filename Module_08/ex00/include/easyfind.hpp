/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:55:25 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 17:02:18 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

class IteratorException: public std::exception
{
public:
    const char* what() const throw()
    {
        return ("[Occurrence not found]");
    }
};

template <typename T>
int easyfind(T &container, int occurrence)
{
    if (container.empty())
        throw IteratorException();
    typename T::iterator iterator;
    iterator = std::find(container.begin(), container.end(), occurrence);
    if (iterator == container.end())
        throw IteratorException();
    return (*iterator);
}

#endif