/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:14:49 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 20:22:17 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    // Zombie *horde;
    // horde = new Zombie[N];
    // int i;

    // i = 0;
    // while (i < N)
    // {
    //     horde[i].init(name);
    //     i++;
    // }
    // return (horde);
    Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].init(name);
	return (horde);
}