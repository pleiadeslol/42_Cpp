/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 22:25:13 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/08 14:55:33 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (std::islower(av[i][j]))
				av[i][j] = std::toupper(av[i][j]);
			j++;
		}
		std::cout << av[i] << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
