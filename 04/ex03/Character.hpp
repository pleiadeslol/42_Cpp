/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:18:54 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/23 17:23:06 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <iostream>
#include "AMateria.hpp"

class	ICharacter {
	public :
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
