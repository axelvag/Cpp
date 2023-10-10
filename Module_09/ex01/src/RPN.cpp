/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:29 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/10 11:33:15 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(void)
{
}

RPN::~RPN(void)
{
}

RPN::RPN(const RPN &copy)
{
    *this = copy;
}

RPN &RPN::operator=(const RPN &assigment)
{
    if (this != &assigment)
        this->_stack = assigment._stack;
    return (*this);
}

void RPN::parseCalc(std::string line)
{
    size_t i = 0;

    while (i < line.length())
    {
        if (i % 2 == 0 && std::isdigit(line.at(i)))
            _stack.push(line.at(i) - '0');
        else if (i % 2 == 0 && (line.at(i) == '+' || line.at(i) == '-' || line.at(i) == '*' || line.at(i) == '/'))
            calculate(line.at(i));
        i++;
    }
    if (_stack.size() != 1)
        throw (InvalidCalc());
    std::cout << _stack.top() << std::endl;
}

void RPN::calculate(char op)
{
    int a = _stack.top();
    _stack.pop();
    int b = _stack.top();
    _stack.pop();
    if (op == '+')
    {
        std::cout << a << " + " << b << std::endl;
        _stack.push(a + b);
    }
    else if (op == '-')
    {
        std::cout << b << " - " << a << std::endl;
        _stack.push(b - a);
    }
    else if (op == '*')
    {
        std::cout << a << " * " << b << std::endl;
        _stack.push(a * b);
    }
    else if (op == '/')
    {
        std::cout << b << " / " << a << std::endl;
        _stack.push(b / a);
    }
}