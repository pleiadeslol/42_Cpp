/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:45:03 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 21:16:54 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap {
	public :
		FragTrap(std::string _name);
		FragTrap(const FragTrap& value);
		FragTrap& operator=(const FragTrap& other);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
		~FragTrap();
};

#endif
