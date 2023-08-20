/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:34:27 by axel              #+#    #+#             */
/*   Updated: 2023/08/15 20:26:04 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("")
{
    std::cout << "Default constructor Bureaucrat called" << std::endl;
    // this->name = "";
    this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Copy constructor Bureaucrat called" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->grade = assignment.grade;
    // if (this != &assignment)
    //     this->integer = assignment.getRawBits();
	// std::cout << assignment << std::endl;
    return *this;
}

const std::string   &Bureaucrat::getName(void) const
{
    return (this->name);
}

unsigned int   Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    Bureaucrat::increGrade(int nb)
{
    if ((this->grade - nb) < 1)
    {
        //mettre une exception
        this->grade = 1;
        std::cout << "Bureaucrat is to high level" << std::endl;
        return ;
    }
    this->grade -= nb;
}

void    Bureaucrat::decreGrade(int nb)
{
    if ((this->grade + nb) > 150)
    {
        //mettre une exception
        this->grade = 150;
        std::cout << "Bureaucrat is to low level" << std::endl;
        return ;
    }
    this->grade += nb;
}