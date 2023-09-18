/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:24:48 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/18 14:06:20 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "Default constructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._memory[i])
        {
            this->_memory[i] = copy._memory[i]->clone();
            this->_memory[i]->setMateriaSource(this);
        }
        else
            this->_memory[i] = NULL;
    }
}


MateriaSource::~MateriaSource()
{
    std::cout << "Destructor MateriaSource called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_memory[i])
            delete this->_memory[i];
    }
}


MateriaSource &MateriaSource::operator=(MateriaSource assignment)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_memory[i])
            delete this->_memory[i];
        if (assignment._memory[i])
            this->_memory[i] = (assignment._memory[i])->clone();
        else
            this->_memory[i] = NULL;
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_memory[i] == NULL)
        {
            this->_memory[i] = materia;
            return ;
        }
    }
    delete materia;
}

void    MateriaSource::printMemory(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_memory[i] != NULL)
            std::cout << "Memory " << i << " is type " << this->_memory[i]->getType() << std::endl;
        else
            std::cout << "Memory " << i << " is empty" << std::endl;
    }
}

AMateria *MateriaSource::createMateria(std::string const& type)
{
    int i = 0;

	while (i < 4 && (this->_memory)[i] && ((this->_memory)[i])->getType() != type)
		i++;
	if (i >= 4 || !(this->_memory)[i])
	{
		std::cout << "Materia " << type << " not found\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->_memory)[i])->clone());
}
