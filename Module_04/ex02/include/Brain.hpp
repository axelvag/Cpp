/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:49:17 by avaganay          #+#    #+#             */
/*   Updated: 2023/08/31 11:32:43 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    
private:
    std::string *ideas;
public:
    Brain(void);
    ~Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &assignment);
    std::string    getIdea(unsigned int nb);
};

#endif