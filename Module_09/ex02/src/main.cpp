/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/10/10 15:47:51 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{

    if (ac == 1)
    {
        std::cout << "Usage: ./PmergeMe [list of number]" << std::endl;
        return (1);
    }
    // PmergeMe pmm;

    // pmm.setVector(parseTemplate(av, pmm.getVector()));
    // ::parseTemplate(av, pmm.getDeque());
    std::vector<int> vector;
    std::deque<int> deque;

    try
    {
        parseTemplate(av, vector);
        std::cout << "Before: ";
        printContainerTemplate(vector);
        algoTemplate(vector);
        std::cout << "After: ";
        printContainerTemplate(vector);

        std::cout << std::endl;

        parseTemplate(av, deque);
        std::cout << "Before: ";
        printContainerTemplate(deque);
        algoTemplate(deque);
        std::cout << "After: ";
        printContainerTemplate(deque);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}