/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 09:38:04 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    
private:
    Brain   *brain;
public:
    Dog(void);
    Dog(const Dog &copy);
    ~Dog(void);
    void    makeSound(void) const;
    Brain	*getBrain( void ) const;
    // void    setIdea(unsigned int nb, std::string idea);
};

#endif