/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:14:49 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 15:34:18 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *ZombieH;
    ZombieH = new Zombie[N];
    int i;

    i = 0;
    while (i < N)
    {
        ZombieH[i].init(name);
        i++;
    }
    return (ZombieH);
}