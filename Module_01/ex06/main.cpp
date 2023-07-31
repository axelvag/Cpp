/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:49:59 by avaganay          #+#    #+#             */
/*   Updated: 2023/07/31 12:57:54 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl_is_not_happy;

	if (ac != 2)
		std::cout << "Choose a level of gravity not more !" << std::endl;
	else
		Harl_is_not_happy.complain(av[1]);
	return (0);
}