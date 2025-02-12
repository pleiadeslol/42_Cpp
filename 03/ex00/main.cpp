/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:03:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/12 18:42:13 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	// Test parameterized constructor
	ClapTrap trap1("Trap1");
	std::cout << trap1.getName() << " created with " << trap1.getHitpts() << " hit points, "
			<< trap1.getEnergypts() << " energy points, and " << trap1.getAttackdmg() << " attack damage." << std::endl;

	// Test attack function
	trap1.attack("Target1");

	// Test takeDamage function
	trap1.takeDamage(5);
	std::cout << trap1.getName() << " now has " << trap1.getHitpts() << " hit points." << std::endl;

	// Test beRepaired function
	trap1.beRepaired(3);
	std::cout << trap1.getName() << " now has " << trap1.getHitpts() << " hit points and "
			<< trap1.getEnergypts() << " energy points." << std::endl;

	// Test setters
	trap1.setHitpts(15);
	trap1.setEnergypts(20);
	trap1.setAttackdmg(5);
	std::cout << trap1.getName() << " updated stats: " << trap1.getHitpts() << " hit points, "
			<< trap1.getEnergypts() << " energy points, and " << trap1.getAttackdmg() << " attack damage." << std::endl;

	// Test copy constructor
	ClapTrap trap2(trap1);
	std::cout << "Copy of " << trap1.getName() << " created: " << trap2.getName() << std::endl;
	trap2.attack("Target2");

	// Test copy assignment operator
	ClapTrap trap3("Trap3");
	trap3 = trap1;
	std::cout << trap3.getName() << " assigned stats from " << trap1.getName() << std::endl;
	trap3.attack("Target3");

	// Test edge cases
	trap1.takeDamage(20); // Should reduce hit points to 0
	std::cout << trap1.getName() << " now has " << trap1.getHitpts() << " hit points." << std::endl;
	trap1.attack("Target4"); // Should fail due to no hit points
	trap1.beRepaired(10); // Should fail due to no energy points

	return 0;
}