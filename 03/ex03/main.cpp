/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:03:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 21:38:40 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    // Test DiamondTrap constructor
    DiamondTrap diamond("Diamond");

    // Test attack function (inherited from ScavTrap)
    diamond.attack("Target1");

    // Test highFivesGuys function (inherited from FragTrap)
    diamond.highFivesGuys();

    // Test guardGate function (inherited from ScavTrap)
    diamond.guardGate();

    // Test whoAmI function (unique to DiamondTrap)
    diamond.whoAmI();

    return 0;
}