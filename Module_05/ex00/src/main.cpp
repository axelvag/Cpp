/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/19 16:18:43 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Bureaucrat.hpp"

int main( void )
{
    //throw remonte dans le code pour exectuer le catch
    //e.what() est une methode de la class exception qui affiche le message d'erreur
    try
    {
        Bureaucrat human("Axel", 100);
        human.decreGrade(40);
		std::cout << human << std::endl;
		std::cout << std::endl;
    }
    catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    try
    {
        Bureaucrat human("Jules", 151);
		std::cout << human << std::endl;
    }
    catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    
    try
    {
        Bureaucrat human("Bob", 2);
        human.increGrade(1);
        human.increGrade(1);
		std::cout << human << std::endl;
    }
    catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
    return 0;
}