/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:02:43 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 21:23:59 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_H_
#define _DIAMONDTRAP_H_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	private :
		std::string	_name;
		int			hitPts;
		int			energyPts;
		int			attackDmg;
	public :
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& value);
		DiamondTrap& operator=(const DiamondTrap& other);
		void	attack(const std::string& target);
		void	whoAmI();
		~DiamondTrap();
};

#endif
