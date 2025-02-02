/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:48:40 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/02 22:55:56 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF: " << stringREF << std::endl;
	return (0);
}
