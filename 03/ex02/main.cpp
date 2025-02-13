/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:03:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 21:00:02 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	// Test FragTrap constructor
	FragTrap frag1("Frag1");
	std::cout << frag1.getName() << " has " << frag1.getHitpts() << " hit points, "
			<< frag1.getEnergypts() << " energy points, and " << frag1.getAttackdmg() << " attack damage." << std::endl;

	// Test attack function
	frag1.attack("Target1");

	// Test takeDamage function
	frag1.takeDamage(30);
	std::cout << frag1.getName() << " now has " << frag1.getHitpts() << " hit points." << std::endl;

	// Test beRepaired function
	frag1.beRepaired(20);
	std::cout << frag1.getName() << " now has " << frag1.getHitpts() << " hit points and "
			<< frag1.getEnergypts() << " energy points." << std::endl;

	// Test highFivesGuys function
	frag1.highFivesGuys();

	// Test copy constructor
	FragTrap frag2(frag1);
	std::cout << "Copy of " << frag1.getName() << " created: " << frag2.getName() << std::endl;

	// Test copy assignment operator
	FragTrap frag3("Frag3");
	frag3 = frag1;
	std::cout << frag3.getName() << " assigned stats from " << frag1.getName() << std::endl;

	return 0;
}