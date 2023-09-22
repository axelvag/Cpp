/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/19 14:55:10 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main( void )
{

	Animal *tab_animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	for (int j = 0; j < 4; j++)
	{
		std::cout << std::endl;
		std::cout << tab_animal[j]->getType() << " :" << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 100; i++)
		{
			std::cout << tab_animal[j]->getBrain()->getIdea(i) << std::endl;
		}
	}

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete tab_animal[i];
		
	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
    return 0;
}