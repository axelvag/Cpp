/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:35:53 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/10 16:26:56 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <limits>
#include <iostream>
#include <fstream>
#include "Contact.hpp"

class PhoneBook
{


private:
    Contact		contact_lst[8];
	int			add_use;

public:
    PhoneBook(void);
    ~PhoneBook(void);
    void    start(void);
    void    help(void);
	void	add(void);
	void	search(void);
	int		contact_search(void);
	
};


#endif