/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:42:55 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/25 18:15:53 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include "ICharacter.hpp"

class	Character : public ICharacter {
	private :
		std::string name;
		AMateria *materias[4];
	public :
		Character();
		Character(std::string _name);
		Character(const Character& value);
		Character& operator=(const Character& other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		~Character();
};

#endif
