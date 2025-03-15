/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:15:39 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 02:37:07 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	int	first;
	int second;
	std::stack<int> nums;
	
	if (ac != 2)
	{
		std::cout << "Error: invalid args." << std::endl;
		return (0);
	}
	if (std::string(av[1]).empty())
		return (0);
	std::string str = av[1];
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] != ' ')
		{
			if (str[i] >= '0' && str[i] <= '9')
				nums.push(atoi(av[1] + i));
			else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			{
				first = nums.top();
				nums.pop();
				second = nums.top();
				nums.pop();
				nums.push(calculate(second, first, str[i]));
			}
			else
			{
				std::cout << "Error." << std::endl;
				return (0);
			}
		}
	}
	if (nums.size() != 1)
		std::cout << "Error." << std::endl;
	else
		std::cout << nums.top() << std::endl;
	return (0);
}
