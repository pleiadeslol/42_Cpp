/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/06 18:21:23 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Contact {
	private :
		int		index;
		char	first_name[50];
		char	last_name[50];
		char	nickname[50];
	public :
		void	AddContact()
		{
			std::cout << "Enter the index: ";
			std::cin.clear();
			std::cin >> index;
			std::cout << "Enter the first name: ";
			std::cin.clear();
			std::cin >> first_name;
			std::cout << "Enter the last name: ";
			std::cin.clear();
			std::cin >> last_name;
			std::cout << "Enter the nickname: ";
			std::cin.clear();
			std::cin >> nickname;
		}
		void	ShowContact()
		{
			std::cout << index << std::endl;
			std::cout << first_name << std::endl;
			std::cout << last_name << std::endl;
			std::cout << nickname << std::endl;
		}
};

class PhoneBook {
	private :
		Contact	contact[8];
};
