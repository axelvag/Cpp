/* ****************************PmergeMe********************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:36 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/10 13:00:23 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <deque>
#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>

template <typename T>
void algoTemplate(T &container);
template <typename T>
void insertionSortTemplate(T &container);

class ParseError : public std::exception
{
    virtual const char *what() const throw()
    {
        return ("Error: Invalide Value");
    }
};

template <typename T>
void printContainerTemplate(T &container)
{
    for (size_t i = 0; i < container.size(); i++)
        std::cout << container[i] << " ";
    std::cout << std::endl;
}

template <typename T>
void printClockTemplate(T &container, double time)
{
    std::cout << "Time to process a range of " << container.size() << " elements: " << time << " us" << std::endl;
}

template <typename T>
void parseTemplate(char **av, T &container)
{
    int i = 1;
    
    while (av[i])
    {
        if (std::atoi(av[i]) == 0 && av[i][0] != '0')
            throw ParseError();
        for (int j = 0; av[i][j] != '\0'; j++)
            if (av[i][j] < '0' || av[i][j] > '9')
                throw ParseError();
        container.push_back(std::atoi(av[i]));
        i++;
    }
}

template <typename T>
void algoTemplate(T &container)
{
    typename T::iterator middle = container.begin();

    std::advance(middle, container.size() / 2);
    if (container.size() < 20)
    {
        insertionSortTemplate(container);
        return;
    }
    T left(container.begin(), middle);
    T right(middle, container.end());
    algoTemplate(left);
    algoTemplate(right);
    std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

template <typename T>
void insertionSortTemplate(T &container)
{
    for (typename T::iterator i = container.begin(); i != container.end(); ++i)
    {
        typename T::iterator j = i;
        while (j != container.begin() && *(j - 1) > *j)
        {
            std::swap(*j, *(j - 1));
            --j;
        }
    }
}

#endif