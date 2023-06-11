/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:32:44 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/11 20:20:26 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int	N;
	// std::string size:

    // std::cout << "\033[33m" << "Size of the horde : " << "\033[0m" << std::endl;
    // std::cin >> size;
	// N = (int)size;
	N = 10;
	Zombie *horde = zombieHorde(N, "Zom");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
    return (0);
}