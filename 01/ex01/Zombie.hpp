/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:32:37 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 22:33:29 by rzarhoun         ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif
