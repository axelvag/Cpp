/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:34:21 by axel              #+#    #+#             */
/*   Updated: 2023/08/28 09:14:14 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    
private:

public:
    WrongCat(void);
    WrongCat(const WrongCat &copy);
    ~WrongCat(void);
    WrongCat &operator=(const WrongCat &assignment);
    void    makeSound(void);
};

#endif