/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:40:20 by axel              #+#    #+#             */
/*   Updated: 2023/10/03 15:16:06 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

void ft_print(std::string str)
{
    std::cout << str << std::endl;
}

void ft_stack(int n, MutantStack<int>    &ms)
{
    std::cout << "push " << n << std::endl;
    ms.push(n);
    std::cout << ms.top() << std::endl;
}

int main(void)
{
    ft_print("----------SUBJECT TESTS----------");

    MutantStack<int>    mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "Stack" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    ft_print("----------MY TESTS----------");

    MutantStack<int>    ms;
    
    ft_stack(1, ms);
    ft_stack(2, ms);
    ms.pop();
    std::cout << ms.top() << std::endl;
    
    return (0);
}