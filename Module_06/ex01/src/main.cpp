/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:37:28 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/28 13:39:52 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Serializer.hpp"

int main(void)
{

    Data	*data = new Data();
	data->str = "GOOD?";

	std::cout << "Data member: " << data->str << std::endl;
	std::cout << "Address: " << data << std::endl;

    std::cout << std::endl;
	std::cout << "!Serialized!" << std::endl;
	uintptr_t	raw = Serializer::serialize(data);
    std::cout << std::endl;
    std::cout << "Data member: " << raw << std::endl;
	std::cout << "Address: " << data << std::endl;
	
    std::cout << std::endl;
    std::cout << "!Deserialize!" << std::endl;
    data = Serializer::deserialize(raw);
    
    std::cout << std::endl;
	std::cout << "Data member: " << data->str << std::endl;
	std::cout << "Address: " << data << std::endl;

	delete data;
    
    return (0);
}