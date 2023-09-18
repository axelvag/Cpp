/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/18 14:15:51 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Character.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"


int main( void )
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
    // const AMateria* ice = new Ice();
    // const AMateria* frost;

    // frost = ice->clone();
    // std::cout << "Frost is type " << frost->getType() << std::endl;
    
    // delete ice;
    // delete frost;
    
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;
    
    // MateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());
    // src->printMemory();
    
    // std::cout << std::endl;
    
    // ICharacter* me = new Character("me");
    // AMateria* tmp1;
    // AMateria* tmp2;
    // AMateria* tmp3;
    // AMateria* tmp4;
    // AMateria* tmp5;
    // AMateria* tmp6;
    // tmp1 = src->createMateria("ice");
    // me->equip(tmp1);
	// tmp2 = src->createMateria("earth");           //not created
    // me->equip(tmp2);
    // tmp3 = src->createMateria("ice");
    // me->equip(tmp3);
    // tmp4 = src->createMateria("cure");
    // me->equip(tmp4);
    // tmp5 = src->createMateria("ice");
    // me->equip(tmp5);
    // tmp6 = src->createMateria("cure");
    // me->equip(tmp6);
    // me->printInventory();
    // me->printFall();
    
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // me->use(2, *bob);
    // me->use(3, *bob);
    // me->use(4, *bob);
     
    // std::cout << std::endl;
    
    // delete tmp1;
    // delete tmp2;
    // delete tmp3;
    // delete tmp4;
    // delete tmp5;
    // delete tmp6;
    // delete bob;
    // delete me;
    // delete src;

    return (0);
}