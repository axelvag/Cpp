/* ************************************************************************** Cat*/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:48:52 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/28 10:31:35 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Default constructor Brain called" << std::endl;
    for (int i = 0; i < 50; i++)
        this->ideas[i] = "Happy";
    for (int i = 50; i < 100; i++)
        this->ideas[i] = "Eat";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Copy constructor Brain called" << std::endl;
    *this = copy;
}

Brain::~Brain(void)
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &assignment)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &assignment)
        return (*this);
    for (int i = 0; i < 100; i++ )
		this->ideas[i] = assignment.ideas[i];
    return (*this);
}

std::string    Brain::getIdea(unsigned int nb)
{
    return (this->ideas[nb]);
}
