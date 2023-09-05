/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:44:15 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 09:36:28 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    
protected:
    std::string type;
public:
    Animal(void);
    virtual ~Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &assignment);
    virtual void    makeSound(void) const;
    const std::string   &getType(void) const;
    virtual Brain	*getBrain( void ) const;
};

#endif