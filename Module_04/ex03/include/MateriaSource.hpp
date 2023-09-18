/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:26:30 by avaganay          #+#    #+#             */
/*   Updated: 2023/09/18 13:26:24 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria *_memory[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
    virtual ~MateriaSource();
    MateriaSource &operator=(MateriaSource other);
    virtual void learnMateria(AMateria *materia);
    virtual AMateria *createMateria(std::string const& type);
    void    printMemory(void);

};

#endif