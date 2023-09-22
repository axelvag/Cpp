/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:55:43 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/18 14:53:40 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{

private:
    std::string _name;
    AMateria *_inventory[4];
    AMateria *_fall[4];
public:
	~Character();
    Character(void);
    Character(std::string name);
    Character(const Character &copy);
    Character &operator=(const Character &assignment);
    std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
    void    printInventory(void);
    void    printFall(void);
};

#endif