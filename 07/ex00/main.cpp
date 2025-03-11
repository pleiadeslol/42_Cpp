/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 05:07:33 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 05:08:14 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

int main() {
	// Test with integers
	int x = 5, y = 10;
	std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
	swap(x, y);
	std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
	std::cout << "min(x, y) = " << min(x, y) << std::endl;
	std::cout << "max(x, y) = " << max(x, y) << std::endl;

	// Test with doubles
	double a = 3.14, b = 2.71;
	std::cout << "\nBefore swap: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;

	// Test with strings
	std::string s1 = "hello", s2 = "world";
	std::cout << "\nBefore swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min(s1, s2) = " << min(s1, s2) << std::endl;
	std::cout << "max(s1, s2) = " << max(s1, s2) << std::endl;

	// Test with equal values
	int m = 42, n = 42;
	std::cout << "\nTesting with equal values: m = " << m << ", n = " << n << std::endl;
	std::cout << "min(m, n) = " << min(m, n) << " (should be n)" << std::endl;
	std::cout << "max(m, n) = " << max(m, n) << " (should be n)" << std::endl;

	return 0;
}
