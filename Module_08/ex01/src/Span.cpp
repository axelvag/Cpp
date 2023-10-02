/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:07:10 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 17:50:09 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int n)
{
    _n = n;
}

Span::Span(Span const &copy)
{
    *this = copy;
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


