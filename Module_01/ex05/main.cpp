/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:18:43 by axel              #+#    #+#             */
/*   Updated: 2023/07/23 20:21:51 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl Harl_is_not_happy;

	Harl_is_not_happy.choose("DEBUG");
	Harl_is_not_happy.choose("INFO");
	Harl_is_not_happy.choose("WARNING");
	Harl_is_not_happy.choose("ERROR");
	return (0);
}