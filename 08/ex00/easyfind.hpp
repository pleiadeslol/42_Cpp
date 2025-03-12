/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:02:14 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 02:14:48 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class	NotFoundException : public std::exception {
	const char* what() const throw() {
		return ("Couldn't find the value you are looking for!");
	}
};

template <typename T>
void	easyfind(T container, int b)
{
	std::vector<int>::iterator	it = std::find(container.begin(), container.end(), b);
	if (it != container.end())
	{
		std::cout << "Value " << *it << " found at position: " <<
			std::distance(container.begin(), it) << std::endl;
	}
	else
		throw NotFoundException();
}
