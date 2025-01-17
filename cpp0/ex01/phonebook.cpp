/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:12 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/17 18:16:17 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::AddContact(void)
{
	std::cout << "Enter the first name: ";
	std::cin.clear();
	// std::cin >> first_name;
	std::cout << "Enter the last name: ";
	std::cin.clear();
	// std::cin >> last_name;
	std::cout << "Enter the nickname: ";
	std::cin.clear();
	// std::cin >> nickname;
	std::cout << "Enter the phone number: ";
	std::cin.clear();
	// std::cin >> phone_num;
	std::cout << "What's your darkest secret ?: ";
	std::cin.clear();
	// std::cin >> dark_secret;
}
void	PhoneBook::ShowContact(void)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	// while ()
}

int main(int ac, char **av)
{
	PhoneBook contact;
	std::string option;

	std::cout << "Welcome to the phonebook :)" << std::endl;
	std::cout << "Here are the available commands, ADD, SEARCH, EXIT." << std::endl;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> option;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::exit(0);
		}
		if (option == "ADD")
			contact.AddContact();
		else if (option == "SEARCH")
			contact.ShowContact();
		else if (option == "EXIT")
			return 0;
		else
			std::cout << "Command Unavailable!" << std::endl;
	}
}
