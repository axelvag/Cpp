/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:06:44 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 17:25:07 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
private:
    unsigned int _n;
public:
    Span(void) {_n = 0;};
    Span(unsigned int n);
    ~Span(void) {};
    Span(Span const &copy);
};



#endif