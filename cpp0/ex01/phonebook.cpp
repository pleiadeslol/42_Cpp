/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:12 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/15 15:57:06 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::AddContact()
{
	if (index < 8)
		index++;
	std::cout << "Enter the first name: ";
	std::cin.clear();
	std::cin >> first_name;
	std::cout << "Enter the last name: ";
	std::cin.clear();
	std::cin >> last_name;
	std::cout << "Enter the nickname: ";
	std::cin.clear();
	std::cin >> nickname;
	std::cout << "Enter the phone number: ";
	std::cin.clear();
	std::cin >> phone_num;
	std::cout << "What's your darkest secret ?: ";
	std::cin.clear();
	std::cin >> dark_secret;
}
void	Contact::ShowContact()
{
	std::cout << index;
	std::cout << "  |  ";
	std::cout << first_name;
	std::cout << "  |  ";
	std::cout << last_name;
	std::cout << "  |  ";
	std::cout << nickname << std::endl;
}

int main(int ac, char **av)
{
	Contact person;
	std::string option;
	while (1)
	{
		std::cin >> option;
		if (option == "ADD")
			person.AddContact();
		if (option == "SEARCH")
			person.ShowContact();
		if (option == "EXIT")
			return 0;
	}
}
