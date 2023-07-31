/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:32:44 by avaganay          #+#    #+#             */
/*   Updated: 2023/07/31 11:18:19 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int	N;
	int i;

	N = 10;
	i = 0;
	Zombie *horde = zombieHorde(N, "Zom");
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
    return (0);
}