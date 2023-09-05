/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:43:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 09:39:04 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default constructor AMateria called" << std::endl;
    this->_type = "";
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "Copy constructor AMateria called" << std::endl;
    *this = copy;
}

AMateria::~AMateria(void)
{
    std::cout << "Destructor AMateria called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assignment)
        return (*this);
    this->_type = assignment._type;
    return *this;
}

std::string const   &AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    return ;
}
