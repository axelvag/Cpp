/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:06:44 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 17:53:52 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include <vector>

class Span
{
    
private:
    unsigned int _n;
    std::vector<int>* _vec;
public:
    Span(void) {_n = 0;};
    Span(unsigned int n);
    ~Span(void) {};
    Span(Span const &copy);
    Span &operator=(const Span &assigment);
    void addNumber(int number);

    class MaxException: public std::exception
    {
    public:
        const char* what() const throw()
        {
            return ("[Max size reached]");
        }
    };
    
};


#endif