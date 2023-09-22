/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:34:27 by axel              #+#    #+#             */
/*   Updated: 2023/09/22 13:56:15 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat(void): _name("X")
{
    std::cout << "Default constructor Bureaucrat called" << std::endl;
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    std::cout << "Name constructor Bureaucrat called" << std::endl;
    this->_grade = grade;
    if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("[Grade Too High Exception]\n");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("[Grade Too Low Exception]\n");
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
    this->_grade = assignment._grade;
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref)
{
	out << ref.getName() << ", bureaucrat is grade " << ref.getGrade();
	return (out);
}

const std::string   &Bureaucrat::getName(void) const
{
    return (this->_name);
}

unsigned int   Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}


void    Bureaucrat::increGrade(int nb)
{
    std::cout << "Increment " << nb << " level" << std::endl;
    if ((this->_grade - nb) < 1)
    {
        this->_grade = 1;
        throw GradeTooHighException();
    }
    this->_grade -= nb;
}

void    Bureaucrat::decreGrade(int nb)
{
    std::cout << "Decrement " << nb << " level" << std::endl;
    if ((this->_grade + nb) > 150)
    {
        this->_grade = 150;
        throw GradeTooLowException();
    }
    this->_grade += nb;
}

void    Bureaucrat::signForm(Form &form)
{
    if (form.getSigned())
        std::cout << this->_name << " couldn’t sign " << form.getName() << " because it's already signed" << std::endl;
    else if (this->_grade > (unsigned int)form.getGradeSign())
        std::cout << this->_name << " couldn’t sign " << form.getName() << " because his grade is too low" << std::endl;
    else
    {
        std::cout << this->_name << " signed " << form.getName() << std::endl;
        form.beSigned(*this);
    }
}