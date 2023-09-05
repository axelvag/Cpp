/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/31 11:32:56 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria
{
    
private:
    
public:
    Cure(void);
    Cure(const Cure &copy);
    ~Cure(void);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif