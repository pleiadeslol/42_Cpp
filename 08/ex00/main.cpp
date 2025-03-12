/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:11:04 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/12 02:17:26 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	try{
		std::vector<int> tab;
		const int tab1[5] = {1, 12, 8, 0, 4};
		for(int i = 0; i < 5; i++)
			tab.push_back(tab1[i]);
		int b = 12;
		easyfind(tab, b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		std::string str = "Hello this is cpp 08";
		std::vector<int> tabb;
		for(int i = 0; i < (int)str.length(); i++)
			tabb.push_back(str[i]);
		int c = ' ';
		easyfind(tabb, c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}