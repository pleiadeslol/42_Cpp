/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:11:37 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 02:15:31 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	calculate(int a, int b, char op)
{
	switch (op)
	{
		case '+' :
			return (a + b);
		case '-' :
			return (a - b);
		case '*' :
			return (a * b);
		case '/' :
			if (b == 0)
			{
				std::cout << "Error." << std::endl;
				exit(1);
			}
			return (a / b);
		default :
			break;
	}
	return (0);
}
