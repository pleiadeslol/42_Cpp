/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:17:59 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/10 20:03:41 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area(Point const& a, Point const& b, Point const& c)
{
	Fixed area = (a.GetX() * (b.GetY() - c.GetY()) +
				b.GetX() * (c.GetY() - a.GetY()) +
				c.GetX() * (a.GetY() - b.GetY())) /
				Fixed(2.0f);
	return area.abs();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed ABC = area(a, b, c);
	Fixed PBC = area(point, b, c);
	Fixed PCA = area(point, c, a);
	Fixed PAB = area(point, a, b);
	return (ABC == PBC + PCA + PAB) &&
			(PBC > Fixed(0)) &&
			(PCA > Fixed(0)) &&
			(PAB > Fixed(0));
}
