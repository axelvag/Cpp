/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:57:08 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/28 16:12:31 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <cstdlib>

Base *Base::generate(void)
{
    int	random;
	Base *base;

	srand((int)time(NULL));
	random = rand() % 3 + 1;
    std::cout << "Generate -> ";
    switch (random)
    {
    case 1:
        std::cout << "A" << std::endl;
        base = new A;
        break;
    case 2:
        std::cout << "B" << std::endl;
        base = new B;
        break;
    case 3:
        std::cout << "C" << std::endl;
        base = new C;
        break;
    default:    
        std::cout << "Error" << std::endl;
        base = NULL;
        break;
    }
    return (base);
}

void Base::identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	
	std::cout << "Identifying from pointer -> ";
	if (a != NULL)
		std::cout << "Identified: A" << std::endl;
	if (b != NULL)
		std::cout << "Identified: B" << std::endl;
	if (c != NULL)
		std::cout << "Identified: C" << std::endl;
	return ;
}

void Base::identify(Base& p)
{
    (void)p;
}