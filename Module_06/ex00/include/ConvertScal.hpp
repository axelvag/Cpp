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
    bool    getFindParsType(void);
    int     getType(void) const;
    void    parsType(std::string src);
    void    parsTypeNanInfChar(std::string str, int len);
    void    convert(std::string str);
    static void    printChar(std::string str);
    static void    printInt(std::string str);
    static void    printFloat(std::string str);
    static void    printDouble(std::string str);
    static void    printInf(std::string str);
    static void    printNan(std::string str);

};

#endif