/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:14:42 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 19:15:27 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(int ac, char **av)
{
	PhoneBook phone;
	std::string option;

	std::cout << "Welcome to the phonebook :)" << std::endl;
	std::cout << "Here are the available commands, ADD, SEARCH, EXIT." << std::endl;
	while (true)
	{
		std::cout << "Enter a command: ";
		std::cin >> option;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::exit(0);
		}
		if (option == "ADD")
		{
			Contact	contact;
			phone.AddContact(contact);
		}
		else if (option == "SEARCH")
		{
			phone.ShowContact();
			if (phone.getContactCount() > 0)
			{
				int	index;
				std::cout << "Enter index of contact to display :";
				std::cin >> index;
				phone.ShowContactDetails(index);
			}
		}
		else if (option == "EXIT")
			break;
		else
			std::cout << "Command Unavailable!" << std::endl;
	}
	return (0);
}
