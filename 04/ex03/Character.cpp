/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:29:36 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/25 18:16:02 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	name = "default";
	for(int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(std::string _name) {
	name = _name;
	for(int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(const Character& value) {
	name = value.name;
	for(int i = 0; i < 4; i++)
	{
		if (value.materias[i])
			materias[i] =  value.materias[i]->clone();
		else
			materias[i] =  NULL;
	}
}

Character& Character::operator=(const Character& other) {
	if (this != &other)
	{
		name = other.name;
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

std::string const & Character::getName() const {
	return (name);
}

void Character::equip(AMateria* m) {
	if (!m)
	{
		std::cout << "You can't equip a null materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!materias[i])
		{
			std::cout << "Materia " << m->getType() << " equiped" << std::endl;
			materias[i] = m;
			return ;
		}
	}
	std::cout << "You cam't equip more than 4 materias" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 4)
	{
		std::cout << "Unvalid index" << std::endl;
		return ;
	}
	if (!materias[idx])
	{
		std::cout << "You can't unequip a null materia" << std::endl;
		return ;
	}
	std::cout << "Materia " << idx << " unequiped" << std::endl;
	delete(materias[idx]);
	materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 4)
	{
		std::cout << "Unvalid index" << std::endl;
		return ;
	}
	if (!materias[idx])
	{
		std::cout << "You can't use a null materia" << std::endl;
		return ;
	}
	std::cout << "Materia " << idx << " used" << std::endl;
	materias[idx]->use(target);
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete(materias[i]);
	}
}
