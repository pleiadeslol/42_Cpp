/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:04:04 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 20:41:38 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std:: string _name) : name(_name), hitPts(10), energyPts(10), attackDmg(0) {
	std::cout << "CrapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& value) : name(value.name), hitPts(value.hitPts), energyPts(value.energyPts), attackDmg(value.attackDmg) {
	std::cout << "CrapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "CrapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPts = other.hitPts;
		this->energyPts = other.energyPts;
		this->attackDmg = other.attackDmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (hitPts > 0 && energyPts > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDmg << " points of damage!" << std::endl;
		energyPts--;
	}
	else
		std::cout << "ClapTrap " << name << " can't attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage!" << std::endl;
	hitPts -= amount;
	if (hitPts < 0)
		hitPts = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (hitPts > 0 && energyPts > 0)
	{
		hitPts += amount;
		energyPts--;
		std::cout << "ClapTrap " << name << " repairs itself, gaining "
				  << amount << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can't repair!" << std::endl;
}

unsigned int	ClapTrap::getHitpts() {
	return (hitPts);
}

unsigned int	ClapTrap::getEnergypts() {
	return (energyPts);
}

unsigned int	ClapTrap::getAttackdmg() {
	return (attackDmg);
}

std::string		ClapTrap::getName() {
	return (name);
}

void	ClapTrap::setHitpts(unsigned int _hitPts) {
	hitPts = _hitPts;
}

void	ClapTrap::setEnergypts(unsigned int _energyPts) {
	energyPts = _energyPts;
}

void	ClapTrap::setAttackdmg(unsigned int _attackDmg) {
	attackDmg = _attackDmg;
}

ClapTrap::~ClapTrap() {
	std::cout << "CrapTrap Destructor called" << std::endl;
}
