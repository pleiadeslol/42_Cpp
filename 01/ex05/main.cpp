/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:33:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/08 17:12:35 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	if (ac != 2)
		return (std::cerr << "Invalid number of arguments" << std::endl, 1);
	harl.complain(av[1]);
	return (0);
}
