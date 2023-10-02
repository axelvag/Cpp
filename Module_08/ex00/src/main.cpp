/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 17:10:03 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <exception>


void	ft_display_header(std::string name)
{
	std::cout << name << std::endl;
	std::cout << "--------------------------" << std::endl;
}

void	ft_display_int(int i)
{
	std::cout << i << std::endl;
}

int main(void)
{
    std::list<int> lst;
    
    try
	{
        ft_display_header("LIST EMPTY");
        std::cout << easyfind(lst, 2) << std::endl << std::endl;
    }
    catch (const IteratorException &e)
    {
        std::cout << e.what() << std::endl;
    }
    
	for (int i = 1; i <= 5; i++)
		lst.push_back(i);
	std::cout << std::endl;
	ft_display_header("LIST");
	std::for_each(lst.begin(), lst.end(), ft_display_int);
	std::cout << std::endl;

	ft_display_header("EXISTING ELEMENT: [2]");
	std::cout << easyfind(lst, 2) << std::endl << std::endl;
    
	ft_display_header("NOT EXISTING ELEMENT: [-28]");
	try
	{
		std::cout << easyfind(lst, -28) << std::endl << std::endl;
	}
	catch (const IteratorException &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
    return (0);
}