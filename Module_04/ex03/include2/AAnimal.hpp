/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:44:15 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 09:36:28 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    
protected:
    std::string type;
public:
    AAnimal(void);
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &assignment);
    virtual void    makeSound(void) const = 0;
    const std::string   &getType(void) const;
    virtual Brain	*getBrain( void ) const;
};

#endif