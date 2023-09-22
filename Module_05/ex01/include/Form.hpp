/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:43:04 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/22 10:45:55 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{

private:
    const std::string _name;
    bool _signed;
    const int _gradeSign;
    const int _gradeExec;

public:
    Form(void);
    ~Form(void);
    Form(std::string name);
    Form(std::string name, int gradeSign, int gradeExec);
    Form &operator=(const Form &assignment);
    std::string getName(void) const;
    bool getSigned(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    void    beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
    {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Form &ref);

#endif