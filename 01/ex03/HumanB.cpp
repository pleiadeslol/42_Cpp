/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:09:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 20:24:11 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), weapon(nullptr) {}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << "doesnt have a weapon to attack with." << std::endl;
}
