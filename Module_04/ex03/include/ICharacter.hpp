/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:14:27 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/18 14:08:57 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "AMateria.hpp"

class AMateria;

class ICharacter
{

protected:
	std::string _name;
	AMateria *_inventory[4];
public:
    // virtual ICharacter(void);
    // virtual ICharacter(std::string name);
	virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual void    printInventory(void) = 0;
	virtual void    printFall(void) = 0;
};

#endif