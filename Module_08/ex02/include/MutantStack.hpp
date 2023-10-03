/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:12:18 by axel              #+#    #+#             */
/*   Updated: 2023/10/03 15:16:15 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include <stack>
#include <deque>
#include <vector>

//class template pour utiliser les operations du conteneur deque
template <typename T, class container=std::deque<T> >
class MutantStack: public std::stack<int>
{
    
private:
    
public:
    MutantStack(void) {};
    ~MutantStack(void) {};
    MutantStack(MutantStack const &copy) {*this = copy;};
    MutantStack &operator=(const MutantStack &assigment) {if (this == &assigment) return (*this); return (*this);};
    typedef typename container::iterator iterator;

    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }

};

#endif