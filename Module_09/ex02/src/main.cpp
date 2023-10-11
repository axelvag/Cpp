/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/10/11 09:57:12 by avaganay         ###   ########.fr       */
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
    
    std::vector<int> vector;
    std::deque<int> deque;

    try
    {
        {
        std::cout << "Vector: " << std::endl;
        parseTemplate(av, vector);
        std::cout << "Before: ";
        printContainerTemplate(vector);
        clock_t start = clock();
        algoTemplate(vector);
        clock_t end = clock();
        std::cout << "After: ";
        printContainerTemplate(vector);
        double time = double(end - start);
        printClockTemplate(vector, time);
        }
        std::cout << std::endl;
        {
        std::cout << "Deque: " << std::endl;
        parseTemplate(av, deque);
        std::cout << "Before: ";
        printContainerTemplate(deque);
        clock_t start_d = clock();
        algoTemplate(deque);
        clock_t end_d = clock();
        std::cout << "After: ";
        printContainerTemplate(deque);
        double time_d = double(end_d - start_d);
        printClockTemplate(deque, time_d);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}