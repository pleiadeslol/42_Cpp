/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:26:23 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 01:32:20 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::ifstream infile(av[1]);
		std::ifstream csvfile("data.csv");
		std::multimap<std::string, float>csv;
		if (csvfile.is_open())
			fill_map(&csvfile, &csv);
		if (infile.is_open())
			parse_input(&infile, &csv);
	}
	else
		std::cout << "Error: could not open file." << std::endl;
}
