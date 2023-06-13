/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:55:19 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/13 17:04:44 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "The address of the string in memory :" << &string << std::endl;
	std::cout << "The address stored in stringPTR :    " << stringPTR << std::endl;
	std::cout << "The address stored in stringREF :    " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string :            " << string << std::endl;
	std::cout << "The value stored in stringPTR :      " << *stringPTR << std::endl;
	std::cout << "The value stored in stringREF :      " << stringREF << std::endl;
	
    return (0);
}