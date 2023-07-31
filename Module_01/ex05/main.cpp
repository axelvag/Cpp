/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:18:43 by axel              #+#    #+#             */
/*   Updated: 2023/07/31 12:49:10 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl Harl_is_not_happy;

	Harl_is_not_happy.complain("DEBUG");
	Harl_is_not_happy.complain("INFO");
	Harl_is_not_happy.complain("WARNING");
	Harl_is_not_happy.complain("ERROR");
	return (0);
}