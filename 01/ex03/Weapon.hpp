/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 23:01:19 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 20:26:53 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>

class	Weapon {
	private:
		std::string	type;
	public:
		Weapon(std::string _type);
		std::string	getType();
		void		setType(std::string _type);
};

#endif
