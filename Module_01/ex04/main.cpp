/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:55:29 by axel              #+#    #+#             */
/*   Updated: 2023/08/22 10:23:36 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(std::string file, std::string s1, std::string s2)
{
	std::fstream	old_file;
	std::fstream	new_file;
	std::string		line;
	int				last;
	size_t			index_val_in_line;
	std::string		tmp;

	old_file.open(file.c_str(), std::ios::in);
	new_file.open(std::string(file + ".replace").c_str(), std::ios::out);
	if (!old_file || !new_file)
	{
		std::cout << "A file could not be opened" << std::endl;
		return ;
	}
	while (getline(old_file, line)) 
	{
		last = 0;
		while ((index_val_in_line = line.find(s1, last)) != std::string::npos) 
		{
			tmp = line.substr(index_val_in_line + s1.size());
			line.erase(index_val_in_line);
			line += s2 + tmp;
			last = index_val_in_line + s2.size();
		}
		new_file << line;
		if (!old_file.eof())
			new_file << std::endl;
	}
	old_file.close();
	new_file.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	else
	{
		if (!av[2][0])
			std::cout << "Strings can't be empty" << std::endl;
		else
			ft_replace(av[1], av[2], av[3]);	
	}
    return (0);
}