/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:59:03 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 20:26:47 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {}

std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string _type)
{
	type = _type;
}
