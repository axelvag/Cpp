/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:24:45 by avaganay          #+#    #+#             */
/*   Updated: 2023/06/10 15:30:14 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
// #include "PhoneBook.hpp"

class Contact
{
    
private:
    int id;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_nb;
    std::string darkest_secret;

public:
    Contact(void);
    ~Contact(void);
    void    contact_init(int i);
    void    contact_print(int id);
    std::string  contact_print_len(std::string str);

};

#endif