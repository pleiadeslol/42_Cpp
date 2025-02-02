/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:55:29 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 22:20:50 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::annouce(void)
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string zombie_name)
{
	name = zombie_name;
}

Zombie::Zombie()
{
	name = "lol";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is destroyed" << std::endl;
}
