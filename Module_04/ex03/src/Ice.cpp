/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:35 by axel              #+#    #+#             */
/*   Updated: 2023/09/05 16:27:30 by avaganay         ###   ########.fr       */
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

AMateria* Ice::clone() const
{
    return (new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}