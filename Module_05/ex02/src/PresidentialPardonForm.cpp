/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:26:45 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/22 14:09:27 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    this->_target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
{
    *this = copy;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assignment)
        this->_target = assignment._target;
    return (*this);
}