/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 04:03:03 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 04:03:13 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ScalarConverter::isChar(const std::string& literal) {
	return (literal.length() == 1 && !isdigit(literal[0]));
}

bool ScalarConverter::isInt(const std::string& literal) {
	if (literal.empty())
		return (false);
	size_t start = (literal[0] == '-') ? 1 : 0;
	for (size_t i = start; i < literal.length(); ++i)
	{
		if (!isdigit(literal[i]))
			return (false);
	}
	return (true);
}

bool ScalarConverter::isFloat(const std::string& literal) {
	if (literal.empty())
		return (false);
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (true);
	size_t len = literal.length();
	if (len < 2 || literal[len - 1] != 'f')
		return (false);
	std::string num = literal.substr(0, len - 1);
	return (isDouble(num));
}

bool ScalarConverter::isDouble(const std::string& literal) {
	if (literal.empty())
		return (false);
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (true);
	size_t start = (literal[0] == '-') ? 1 : 0;
	bool dotFound = false;
	for (size_t i = start; i < literal.length(); ++i)
	{
		if (literal[i] == '.')
		{
			if (dotFound)
				return (false);
			dotFound = true;
		}
		else if (!isdigit(literal[i]))
			return (false);
	}
	return (dotFound);
}
