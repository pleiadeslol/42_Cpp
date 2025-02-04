/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:33:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/04 15:30:50 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_level(std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	else if (level == "INFO")
		return (INFO);
	else if (level == "WARNING")
		return (WARNING);
	else if (level == "ERROR")
		return (ERROR);
	else return (-1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << "Wrong number of args" << std::endl, 1);
	Harl	harl;
	int	level = get_level(av[1]);
	switch (level) {
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(DEBUG);
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(INFO);
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(WARNING);
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(ERROR);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}
