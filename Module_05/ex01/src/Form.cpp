/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:44:48 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/22 10:48:37 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(void): _name("...") , _signed(0), _gradeSign(50), _gradeExec(100)
{
    std::cout << "Default constructor Form called" << std::endl;
}

Form::~Form(void)
{
    std::cout << "Destructor Form called" << std::endl;
}

Form::Form(std::string name): _name(name), _signed(0), _gradeSign(50), _gradeExec(100)
{
    std::cout << "Name constructor Form called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _signed(0), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << "Grade constructor Form called" << std::endl;
    if (_gradeSign < 1 || _gradeExec < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExec > 150)
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("[Grade Sign or Execution is too high Exception]\n");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("[Grade Sign or Execution is too low Exception]\n");
}

Form &Form::operator=(const Form &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &assignment)
        this->_signed = assignment._signed;
    return (*this);
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getSigned(void) const
{
    return (this->_signed);
}

int Form::getGradeSign(void) const
{
    return (this->_gradeSign);
}

int Form::getGradeExec(void) const
{
    return (this->_gradeExec);
}

std::ostream &operator<<(std::ostream &out, const Form &ref)
{
    out << "Form " << ref.getName() << " is ";
    if (ref.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and require a grade " << ref.getGradeSign() << " to be signed and a grade " << ref.getGradeExec() << " to be executed." << std::endl;
    return (out);
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > (unsigned int)this->_gradeSign)
        throw GradeTooLowException();
    else
        this->_signed = 1;
}