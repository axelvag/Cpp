/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/26 14:14:52 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/ConvertScal.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string str = argv[1];
    ConvertScal scal;
    scal.pars_type(str);
    std::cout << "find_pars_type: " << scal.get_find_pars_type() << std::endl;
    std::cout << "type: " << scal.get_type() << std::endl;
    
    std::cout << std::endl;
    scal.convert(str);

    
    return (0);
}