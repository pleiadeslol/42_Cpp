/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:03:59 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/12 18:37:17 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>

class	ClapTrap {
	private :
		std::string	name;
		int			hitPts;
		int			energyPts;
		int			attackDmg;
	public :
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& value);
		ClapTrap& operator=(const ClapTrap& other);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	getHitpts();
		unsigned int	getEnergypts();
		unsigned int	getAttackdmg();
		std::string		getName();
		void	setHitpts(unsigned int _hitPts);
		void	setEnergypts(unsigned int _energyPts);
		void	setAttackdmg(unsigned int _attackDmg);
		~ClapTrap();
};

#endif
