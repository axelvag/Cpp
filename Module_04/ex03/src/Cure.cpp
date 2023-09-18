/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 11:23:03 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void)
{
    std::cout << "Default constructor Cure called" << std::endl;
    this->_type = "cure";
}

Cure::Cure(const Cure &copy)
{
    std::cout << "Copy constructor Cure called" << std::endl;
    *this = copy;
}

Cure::~Cure(void)
{
    std::cout << "Destructor Cure called" << std::endl;
}

Cure &Cure::operator=(const Cure &assignment)
{
	std::cout << "Assigned from " << assignment.getType() << std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
