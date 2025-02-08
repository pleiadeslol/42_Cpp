/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:39:23 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/08 16:07:27 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N = 7;
	std::string	name = "Pleiades";
	Zombie *horde = zombieHorde(N, name);
	for(int i = 0; i < N; i++)
		horde[i].annouce();
	delete[] horde;
	return (0);
}
