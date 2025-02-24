/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:29:36 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/24 21:11:11 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	name = "default";
	for(int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(std::string &_name) {
	name = _name;
	for(int i = 0; i < 4; i++)
		materias[i] = NULL;
}

Character::Character(const Character& value) {
	name = value.name;
	for(int i = 0; i < 4; i++)
	{
		if (value.materias[i])
			materias[i] =  value.materias[i];
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
				materias[i] =  other.materias[i];
			else
				materias[i] =  NULL;
		}
	}
}

std::string const & Character::getName() const {

}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter& target) {

}

Character::~Character() {

}
