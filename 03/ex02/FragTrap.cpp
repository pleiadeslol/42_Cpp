/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:47:22 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 20:57:08 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name) {
	std::cout << "FragTrap Defaullt constructor called" << std::endl;
	setHitpts(100);
	setEnergypts(100);
	setAttackdmg(30);
}

FragTrap::FragTrap(const FragTrap& value) : ClapTrap(value) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	int	energyPts = getEnergypts();
	if (getHitpts() > 0 && energyPts > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackdmg() << " points of damage!" << std::endl;
		setEnergypts(--energyPts);
	}
	else
		std::cout << "FragTrap " << getName() << " can't attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap gave a HIGH FIVE!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}
