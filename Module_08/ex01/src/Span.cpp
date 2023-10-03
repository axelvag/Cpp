/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:10 by axel              #+#    #+#             */
/*   Updated: 2023/10/03 13:18:58 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int n)
{
    _n = n;
    _vec = new std::vector<int>;
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span::~Span(void)
{
    delete _vec;
}

Span &Span::operator=(const Span &assigment)
{
    if (this == &assigment)
        return (*this);
    _n = assigment._n;
    return (*this);
}

void Span::addNumber(int number)
{
	if (_vec->size() == _n)
		throw MaxException();
	_vec->push_back(number);
}

unsigned int Span::shortestSpan(void)
{
    unsigned int res;
    
    if (_vec->size() <= 1)
        throw NoSpanException();
    sort(_vec->begin(), _vec->end());
    std::vector<int>::iterator iterator = _vec->begin();
    std::vector<int>::iterator iterator2 = (_vec->begin() + 1);
    res = iterator2 - iterator;
    return (res);
}

unsigned int Span::longestSpan(void)
{
    if (_vec->size() <= 1)
        throw NoSpanException();
    sort(_vec->begin(), _vec->end());
    return (_vec->at(_vec->size() - 1) - _vec->at(0));

}


