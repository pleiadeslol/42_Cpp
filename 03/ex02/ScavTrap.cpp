/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:08:16 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 20:39:00 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)  {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	setHitpts(100);
	setEnergypts(50);
	setAttackdmg(20);
}

ScavTrap::ScavTrap(const ScavTrap& value) : ClapTrap(value) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		gate_keeper_mode = other.gate_keeper_mode;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	int	energyPts = getEnergypts();
	if (getHitpts() > 0 && energyPts > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackdmg() << " points of damage!" << std::endl;
		setEnergypts(--energyPts);
	}
	else
		std::cout << "ScavTrap " << getName() << " can't attack!" << std::endl;
}

void	ScavTrap::guardGate() {
	if (!gate_keeper_mode)
		std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap is not in Gate keeper mode!" << std::endl;
	gate_keeper_mode = !gate_keeper_mode;
		
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}
