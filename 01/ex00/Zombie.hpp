/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:50:59 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 22:21:48 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>

class	Zombie {
	private:
		std::string name;
	public:
		void		annouce(void);
		Zombie(std::string zombie_name);
		Zombie();
		~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
