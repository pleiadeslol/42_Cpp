/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:33:45 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/03 21:36:39 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;
	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("0");
	std::cout << "[ INFO ]" << std::endl;
	harl.complain("1");
	std::cout << "[ WARNING ]" << std::endl;
	harl.complain("2");
	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("3");
	return (0);
}
