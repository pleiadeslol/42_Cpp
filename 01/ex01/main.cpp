/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:39:23 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 22:46:16 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N = 7;
	std::string	name = "Pleiades";
	Zombie *horde = zombieHorde(N, name);
	int i = 0;
	while (i < N)
	{
		horde[i].annouce();
		i++;
	}
	delete[] horde;
	return (0);
}
