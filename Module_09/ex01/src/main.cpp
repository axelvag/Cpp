/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/10/10 11:32:14 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int ac, char **av)
{
    RPN rpn;

    if (ac != 2)
    {
        std::cout << "Usage: ./RPN [number]" << std::endl;
        return (1);
    }
    
    try
    {
        rpn.parseCalc(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}