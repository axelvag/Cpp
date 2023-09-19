/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:34:18 by axel              #+#    #+#             */
/*   Updated: 2023/09/19 15:46:07 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    
private:
    const std::string _name;
    unsigned int _grade; //1 to 150
public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &assignment);
    const std::string   &getName(void) const;
    unsigned int   getGrade(void) const;
    void    increGrade(int nb);
    void    decreGrade(int nb);

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &ref);

#endif