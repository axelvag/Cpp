/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:33:54 by axel              #+#    #+#             */
/*   Updated: 2023/08/23 15:31:42 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    
private:

public:
    FragTrap(void);
    FragTrap(const std::string name);
    ~FragTrap(void);
    FragTrap &operator=(const FragTrap &assignment);
    void highFivesGuys(void);
    void attack(const std::string& target);
};

#endif