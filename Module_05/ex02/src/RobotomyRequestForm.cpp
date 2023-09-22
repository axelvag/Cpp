/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:26:26 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/22 14:08:53 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->_target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
    *this = copy;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assignment)
        this->_target = assignment._target;
    return (*this);
}