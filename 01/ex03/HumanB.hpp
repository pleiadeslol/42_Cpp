/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:07:02 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/08 16:42:01 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H_
#define _HUMANB_H_

#include "Weapon.hpp"
class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string _name);
		void	setWeapon(Weapon &newWeapon);
		void	attack();
};


#endif
