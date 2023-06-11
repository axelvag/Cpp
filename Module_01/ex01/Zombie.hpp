/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:07:54 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 20:23:39 by axel             ###   ########.fr       */
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
    Zombie* zombieHorde( int N, std::string name );
    
};

Zombie* zombieHorde(int N, std::string name);

#endif