/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:36 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/10 12:59:15 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <stack>
#include <fstream>
#include <string>

class RPN
{

private:
    std::stack<int> _stack;
public:
    RPN();
    ~RPN();
    RPN(const RPN &copy);
    RPN &operator=(const RPN &assigment);
    void parseCalc(std::string line);
    void calculate(char op);
    int isOperator(char c);

    class InvalidCalc : public std::exception
    {
        virtual const char *what() const throw()
        {
            return ("Error: Invalide calculation");
        }
    };
};

#endif