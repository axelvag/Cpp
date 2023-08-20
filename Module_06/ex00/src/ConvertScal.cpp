/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertScal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:16:48 by axel              #+#    #+#             */
/*   Updated: 2023/08/07 20:16:52 by axel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ConvertScal.hpp"

ConvertScal::ConvertScal(void)
{
    std::cout << "Default constructor ConvertScal called" << std::endl;
    // this->name = "";
}

ConvertScal::ConvertScal(const ConvertScal &copy)
{
    std::cout << "Copy constructor ConvertScal called" << std::endl;
    *this = copy;
}

ConvertScal::~ConvertScal(void)
{
    std::cout << "Destructor ConvertScal called" << std::endl;
}

// ConvertScal &ConvertScal::operator=(const ConvertScal &assignment)
// {
//     std::cout << "Copy assignment operator called" << std::endl;
//     // this->grade = assignment.grade;
//     // if (this != &assignment)
//     //     this->integer = assignment.getRawBits();
// 	// std::cout << assignment << std::endl;
//     return *this;
// }

// const std::string   &ConvertScal::getName(void) const
// {
//     // return (this->name);
// }