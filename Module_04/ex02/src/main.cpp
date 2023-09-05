/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/31 11:41:25 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main( void )
{

	// const AAnimal* animal = new AAnimal();
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();
	std::cout << std::endl;

    const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl;
	wrong_cat->makeSound();
	wrong_animal->makeSound();

	std::cout << std::endl;
	delete dog;
	delete cat;
	delete wrong_cat;
	delete wrong_animal;

	std::cout << "------------------------------------" << std::endl;

	AAnimal *tab_animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

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
    return 0;
}