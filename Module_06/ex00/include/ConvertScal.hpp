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

public:
    ConvertScal(void);
    ~ConvertScal();
    ConvertScal(const ConvertScal &copy);
    ConvertScal &operator=(const ConvertScal &copy);
    static void    convert(std::string str, int _type);
    static void    parsType(std::string src, int &_type, bool &_find_pars_type);
    static void    parsTypeNanInfChar(std::string str, int len, int &_type, bool &_find_pars_type);
    static void    printChar(std::string str);
    static void    printInt(std::string str);
    static void    printFloat(std::string str);
    static void    printDouble(std::string str);
    static void    printInf(std::string str);
    static void    printNan(std::string str);

};

#endif