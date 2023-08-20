/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:34:18 by axel              #+#    #+#             */
/*   Updated: 2023/08/07 19:54:38 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    
private:
    const std::string name;
    unsigned int grade; //1 to 150
public:
    Bureaucrat(void);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &assignment);
    const std::string   &getName(void) const;
    unsigned int   getGrade(void) const;
    void    increGrade(int nb);
    void    decreGrade(int nb);

    
};

#endif