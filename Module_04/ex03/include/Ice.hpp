/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:21 by axel              #+#    #+#             */
/*   Updated: 2023/09/18 13:47:50 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria
{
    
private:
    
public:
    Ice(void);
    Ice(const Ice &copy);
    ~Ice(void);
    Ice &operator=(const Ice &assignment);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif