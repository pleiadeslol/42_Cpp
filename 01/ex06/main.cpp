/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:33:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 21:48:06 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Wrong number of args" << std::endl, 1);
	Harl	harl;
	std::string	level = av[1];
	if (level.compare("DEBUG") == 0)
	{
		std::cout << "[ DEBUG ]" << std::endl;
		harl.complain("0");
		std::cout << "[ INFO ]" << std::endl;
		harl.complain("1");
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("2");
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("3");
	}
	else if (level.compare("INFO") == 0)
	{
		std::cout << "[ INFO ]" << std::endl;
		harl.complain("1");
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("2");
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("3");
	}
	else if (level.compare("WARNING") == 0)
	{
		std::cout << "[ WARNING ]" << std::endl;
		harl.complain("2");
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("3");
	}
	else if (level.compare("ERROR") == 0)
	{
		std::cout << "[ ERROR ]" << std::endl;
		harl.complain("3");
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}
