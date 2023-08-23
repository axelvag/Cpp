/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:07:54 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/23 08:31:54 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
    std::string name;

public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
    void init(std::string name);
    
};

Zombie* zombieHorde(int N, std::string name);

#endif