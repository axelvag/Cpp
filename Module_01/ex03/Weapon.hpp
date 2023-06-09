/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 22:22:19 by axel              #+#    #+#             */
/*   Updated: 2023/07/10 12:33:30 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "HumanA.hpp"

class   Weapon
{

private:
    std::string type;
    
public:
    Weapon(std::string type);
    ~Weapon(void);
    const std::string&	getType(void);
    void    setType(std::string type);

};

#endif