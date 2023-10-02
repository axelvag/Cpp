/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:27:13 by axel              #+#    #+#             */
/*   Updated: 2023/10/02 16:43:04 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template <class T>
class Array
{

private:
    unsigned int _len;
    T *_array;

public:
    Array(void);
    Array(unsigned int len);
    Array(const Array &copy);
    ~Array(void);
    Array &operator=(const Array &assigment);
    T &operator[](unsigned int index);
    size_t size (void) const;

    class IndexException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return ("[Index innacessible]");
        }
    };
};

template <class T>
Array<T>::Array(void)
{
	std::cout << "Default constructor called" << std::endl;
    this->_len = 0;
    this->_array = NULL;
}

template<class T>
Array<T>::Array(unsigned int len)
{
	std::cout << "Len constructor called" << std::endl;
    this->_len = len;
	this->_array = new T[this->_len];
}

template<class T>
Array<T>::Array(const Array &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_len = copy._len;
    this->_array = new T[this->_len];
    for (unsigned int i = 0; i < this->_len; i++)
        this->_array[i] = copy._array[i];
}

template<class T>
Array<T>::~Array(void)
{
    std::cout << "Destructor called" << std::endl;
    delete [] this->_array;
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &assigment)
{
    if (this == &assigment)
        return (*this);
    if (this->_len > 0)
        delete [] this->_array;
    this->_len = assigment._len;
    this->_array = new T[assigment._len];
    for (unsigned int i = 0; i < assigment._len; i++)
        this->_array[i] = assigment._array[i];
    return (*this);
}

template <class T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->_len)
        throw Array<T>::IndexException();
    return (this->_array[index]);
}

template <class T>
size_t Array<T>::size(void) const
{
    return (this->_len);
}


#endif