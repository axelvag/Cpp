/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axel <axel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:55:29 by axel              #+#    #+#             */
/*   Updated: 2023/08/20 09:34:44 by axel             ###   ########.fr       */
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

	//premier parametre pour le nom qu'on donne au fichier
	//deuxieme pour sont mode (in ou out)
	old_file.open(file.c_str(), std::ios::in);
	new_file.open(std::string(file + "_replace").c_str(), std::ios::out);
	if (!old_file || !new_file)
	{
		std::cout << "A file could not be opened" << std::endl;
		return ;
	}
	//tant que le fichier n'est pas fini
	//remplie line
	while (getline(old_file, line)) 
	{
		//last = index in str
		last = 0;
		//find cherche s1 dans la line en incrementant index_val_in_line
		//et while on est pas a /n
		while ((index_val_in_line = line.find(s1, last)) != std::string::npos) 
		{
			// std::cout << index_val_in_line << std::endl;
			// tmp = la partie apres s1 jusqu'a la fin de la line de base
			// puis on eleve s1 de line en enlevant tout apres l'index_val_in_line
			// pour enfin mettre s2 puis la suite de la line (tmp) pour continuer a effacer 
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
		if (!av[2][0] || !av[3][0])
			std::cout << "Strings can't be empty" << std::endl;
		else
			ft_replace(av[1], av[2], av[3]);	
	}
    return (0);
}