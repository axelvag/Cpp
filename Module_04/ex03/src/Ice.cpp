/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/09/18 13:47:26 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void)
{
    std::cout << "Default constructor Ice called" << std::endl;
    this->_type = "ice";
}

Ice::Ice(const Ice &copy)
{
    std::cout << "Copy constructor Ice called" << std::endl;
    *this = copy;
}

Ice::~Ice(void)
{
    std::cout << "Destructor Ice called" << std::endl;
}

Ice &Ice::operator=(const Ice &assignment)
{
	std::cout << "Assigned from " << assignment.getType() << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}