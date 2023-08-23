/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:33:54 by axel              #+#    #+#             */
/*   Updated: 2023/08/23 15:31:45 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    
private:

public:
    ScavTrap(void);
    ScavTrap(const std::string name);
    ~ScavTrap(void);
    ScavTrap &operator=(const ScavTrap &assignment);
    void guardGate(void);
    void attack(const std::string& target);
};

#endif