/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:19:41 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/28 13:23:50 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

class Serializer
{
private:

public:
    Serializer(void);
    ~Serializer(void);
    Serializer(Serializer const &copy);
    Serializer&	operator=(Serializer const &assignement);
    static uintptr_t serialize(Data* ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif
