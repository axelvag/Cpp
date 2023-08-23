/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:59:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/23 13:43:49 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    
protected:
    std::string _name;
    int         _hit;
    int         _energy;
    int         _attack;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &assignment);
    const   std::string &getName(void) const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

// std::ostream &operator<<(std::ostream &out, const ClapTrap &claptrap);

#endif