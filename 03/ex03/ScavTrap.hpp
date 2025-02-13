/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:59:48 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 21:16:46 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {
	private :
		bool	gate_keeper_mode;
	public :
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap& value);
		ScavTrap& operator=(const ScavTrap& other);
		void	attack(const std::string& target);
		void	guardGate();
		~ScavTrap();
};

#endif
