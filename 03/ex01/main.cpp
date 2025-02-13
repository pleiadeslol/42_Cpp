/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:03:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 20:40:13 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Test ScavTrap constructor
    ScavTrap scav1("Scav1");
    std::cout << scav1.getName() << " has " << scav1.getHitpts() << " hit points, "
              << scav1.getEnergypts() << " energy points, and " << scav1.getAttackdmg() << " attack damage." << std::endl;

    // Test attack function
    scav1.attack("Target1");

    // Test takeDamage function
    scav1.takeDamage(30);
    std::cout << scav1.getName() << " now has " << scav1.getHitpts() << " hit points." << std::endl;

    // Test beRepaired function
    scav1.beRepaired(20);
    std::cout << scav1.getName() << " now has " << scav1.getHitpts() << " hit points and "
              << scav1.getEnergypts() << " energy points." << std::endl;

    // Test guardGate function
    scav1.guardGate();

    // Test copy constructor
    ScavTrap scav2(scav1);
    std::cout << "Copy of " << scav1.getName() << " created: " << scav2.getName() << std::endl;

    // Test copy assignment operator
    ScavTrap scav3("Scav3");
    scav3 = scav1;
    std::cout << scav3.getName() << " assigned stats from " << scav1.getName() << std::endl;

    return 0;
}