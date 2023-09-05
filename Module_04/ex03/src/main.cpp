/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/05 16:02:21 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"


int main( void )
{
    const AMateria* ice = new Ice();
    const AMateria* fire;

    std::cout << std::endl;
    fire = ice->clone();
    std::cout << "Fire is type " << fire->getType() << std::endl;
    std::cout << std::endl;
    
    std::cout << std::endl;
    ICharacter* me = new Character("Jules");
    
    std::cout << "Character name is : " << me->getName() << std::endl;
    
    std::cout << std::endl;
    
    delete ice;
    delete fire;
    return 0;
}