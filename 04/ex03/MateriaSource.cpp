/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:07:09 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/25 18:13:32 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& value) {
	for(int i = 0; i < 4; i++)
	{
		if (value.materias[i])
			materias[i] =  value.materias[i]->clone();
		else
			materias[i] =  NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			if (materias[i])
				delete(materias[i]);
			if (other.materias[i])
				materias[i] =  other.materias[i]->clone();
			else
				materias[i] =  NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] == NULL)
		{
			materias[i] = m;
			return;
		}
	}
	std::cout << "MateriaSource is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete(materias[i]);
}
