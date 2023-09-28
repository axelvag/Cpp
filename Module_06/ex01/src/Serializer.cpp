/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:19:02 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/28 13:29:03 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(void)
{
    std::cout << "Serializer default constructor created" << std::endl;
}

Serializer::~Serializer(void)
{
    std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(Serializer const &copy)
{
    std::cout << "Serializer copy constructor called" << std::endl;
    *this = copy;
}

Serializer&	Serializer::operator=(Serializer const &assignement)
{
    std::cout << "Serializer copy assignement called" << std::endl;
    if (this != &assignement)
        *this = assignement;
    return (*this);
}

uintptr_t   Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}