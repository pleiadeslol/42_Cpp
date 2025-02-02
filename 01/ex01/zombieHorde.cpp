/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:33:35 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 22:45:15 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		new(&horde[i]) Zombie(name);
		i++;
	}
	return (horde);
}
