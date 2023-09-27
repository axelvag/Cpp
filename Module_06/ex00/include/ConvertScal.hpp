/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScal.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:00:27 by axel              #+#    #+#             */
/*   Updated: 2023/08/07 20:03:54 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTSCAL_HPP
#define CONVERTSCAL_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

class ConvertScal
{
    
private:
    int _type; //0 = unknow, 1 = char, 2 = int, 3 = float, 4 = double, 5 = inf, 6 = nan"
    bool    _find_pars_type;
public:
    ConvertScal(void);
    ~ConvertScal();
    ConvertScal(const ConvertScal &copy);
    ConvertScal &operator=(const ConvertScal &copy);
    bool    get_find_pars_type(void) const;
    int     get_type(void) const;
    void    pars_type(std::string src);
    void    convert(std::string str);
    void    print_char(std::string str) const;
    void    print_int(std::string str) const;
    void    print_float(std::string str) const;
    void    print_double(std::string str) const;
    void    print_inf(std::string str) const;
    void    print_nan(std::string str) const;

};

#endif