/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:22:19 by axel              #+#    #+#             */
/*   Updated: 2023/08/01 13:14:12 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class   Weapon
{

private:
    std::string type;
    
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon(void);
    const std::string  &getType(void);
    void    setType(std::string type);

};

#endif