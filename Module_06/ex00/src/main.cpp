/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/27 16:02:43 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ConvertScal.hpp"

int main(int argc, char **argv)
{
    // int _type; //0 = unknow, 1 = char, 2 = int, 3 = float, 4 = double, 5 = inf, 6 = nan"
    // bool    _find_pars_type;
    
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string str = argv[1];
    ConvertScal scal;
    scal.parsType(str);
    scal.convert(str);

    
    return (0);
}