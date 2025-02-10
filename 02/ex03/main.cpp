/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:03:22 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 20:11:27 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main() {
	Point a(0.0f, 0.0f);
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);

	Point testPoints[] = {
		Point(10.0f, 15.0f),   // Inside the triangle
		Point(0.0f, 0.0f),   // On a vertex (should be outside)
		Point(10.0f, 0.0f),   // On an edge (should be outside)
		Point(30.0f, 15.0f),   // Outside the triangle
	};
	for (size_t i = 0; i < sizeof(testPoints) / sizeof(testPoints[0]); ++i) {
		std::cout << "Point (" << testPoints[i].GetX() << ", " << testPoints[i].GetY() << ") is ";
		if (bsp(a, b, c, testPoints[i])) {
			std::cout << "inside the triangle." << std::endl;
		} else {
			std::cout << "outside the triangle." << std::endl;
		}
	}
	return 0;
}
