/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:04:40 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 03:17:20 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERTER_H_
#define _SCALARCONVERTER_H_

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>

class	ScalarConverter {
	public :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& value);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		static bool isChar(const std::string& literal);
		static bool isInt(const std::string& literal);
		static bool isFloat(const std::string& literal);
		static bool isDouble(const std::string& literal);

		static void	convertChar(const std::string& literal);
		static void	convertInt(const std::string& literal);
		static void	convertFloat(const std::string& literal);
		static void	convertDouble(const std::string& literal);

		static void convert(const char* str);
};

#endif