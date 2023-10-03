/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/10/03 13:39:57 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <exception>
#include <vector>


void ft_print(std::string str)
{
    std::cout << str << std::endl;
}


int main(void)
{
    try
    {
        std::cout << "----------N = 5 but 6 number add----------" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(10);
        sp.addNumber(11);
        
        ft_print("Shortest span: ");
        std::cout << sp.shortestSpan() << std::endl;
        ft_print("Longest span: ");
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        std::cout << "----------N = 7----------" << std::endl;
        Span sp = Span(7);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(10);
        sp.addNumber(11);
        
        ft_print("Shortest span: ");
        std::cout << sp.shortestSpan() << std::endl;
        ft_print("Longest span: ");
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        std::cout << "----------Span empty----------" << std::endl;
        Span sp = Span(7);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        std::cout << "----------100000----------" << std::endl;
        Span *sp2 = new Span(100000);
        for (int i = 0; i < 100000; i++)
            sp2->addNumber(100000 - i);
        ft_print("Shortest span: ");
        std::cout << sp2->shortestSpan() << std::endl;
        ft_print("Longest span: ");
        std::cout << sp2->longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}