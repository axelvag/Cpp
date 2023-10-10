/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:13:29 by avaganay          #+#    #+#             */
/*   Updated: 2023/10/10 12:56:19 by avaganay         ###   ########.fr       */
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

int RPN::isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (1);
    return (0);
}

void RPN::parseCalc(std::string line)
{
    size_t i = 0;

    while (i < line.length())
    {
        if (line.at(i) != ' ' && !std::isdigit(line.at(i)) && !isOperator(line.at(i)))
            throw (InvalidCalc());
        else if (i % 2 == 1 && line.at(i) != ' ')
            throw (InvalidCalc());
        else if (i % 2 == 0 && std::isdigit(line.at(i)))
            _stack.push(line.at(i) - '0');
        else if (i % 2 == 0 && isOperator(line.at(i)))
            calculate(line.at(i));
        i++;
    }
    if (_stack.size() != 1)
        throw (InvalidCalc());
    std::cout << _stack.top() << std::endl;
}

void RPN::calculate(char op)
{
    if (_stack.size() < 2)
        throw (InvalidCalc());
    int a = _stack.top();
    _stack.pop();
    int b = _stack.top();
    _stack.pop();
    if (op == '+')
        _stack.push(a + b);
    else if (op == '-')
        _stack.push(b - a);
    else if (op == '*')
        _stack.push(a * b);
    else if (op == '/')
    {
        if (a == 0)
            throw (InvalidCalc());
        _stack.push(b / a);
    }
}