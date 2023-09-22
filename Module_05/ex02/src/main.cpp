/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/22 11:23:41 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main( void )
{
    // Permis _gradeSign must be between 1 and 15 -> error
    try
    {
        Form permis("Permis", 160, 150);
		std::cout << std::endl;
    }
    catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    // Axel grade 15 is superior to _gradeSign 100 asked so be Signed -> good
    try
    {
        Bureaucrat human("Axel", 15);
        Form brevet("Brevet", 100, 10);
        
        std::cout << human << std::endl;
        std::cout << brevet << std::endl;
        brevet.beSigned(human);
        std::cout << brevet << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    // Jules grade 40 is inferior to _gradeSign 20 asked -> error
    try
    {
        Bureaucrat human("Jules", 40);
        Form location("Location", 20, 20);
        
        std::cout << human << std::endl;
        std::cout << location << std::endl;
        location.beSigned(human);
        std::cout << location << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Bob already signed bac -> error
    try
    {
        Bureaucrat human("Bob", 1);
        Form bac("Bac", 60, 50);
        
        std::cout << human << std::endl;
        std::cout << bac << std::endl;
        bac.beSigned(human);
        std::cout << bac << std::endl;
        human.signForm(bac);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    // Bob signForm -> good
    try
    {
        Bureaucrat human("Bob", 1);
        Form bac("Bac", 60, 50);
        
        std::cout << human << std::endl;
        std::cout << bac << std::endl;
        human.signForm(bac);
        std::cout << bac << std::endl;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}