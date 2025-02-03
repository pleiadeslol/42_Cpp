/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:00:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 20:16:47 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H_
#define _HUMANA_H_

#include "Weapon.hpp"
class	HumanA {
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		void	attack();
};

#endif
