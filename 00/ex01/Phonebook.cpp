/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:12 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 19:15:19 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int		PhoneBook::getContactCount()
{
	return contact_count;
}
std::string PhoneBook::truncateString(const std::string& str)
{
		if (str.length() > 10)
			return str.substr(0, 9) + ".";
		return str;
}

void	PhoneBook::AddContact(Contact &contact)
{
	std::string	input;

	std::cout << "Enter the first name: ";
	std::cin.clear();
	std::cin >> input;
	contact.setFirstName(input);
	std::cout << "Enter the last name: ";
	std::cin.clear();
	std::cin >> input;
	contact.setLastName(input);
	std::cout << "Enter the nickname: ";
	std::cin.clear();
	std::cin >> input;
	contact.setNickname(input);
	std::cout << "Enter the phone number: ";
	std::cin.clear();
	std::cin >> input;
	contact.setPhoneNumber(input);
	std::cout << "What's your darkest secret ?: ";
	std::cin.clear();
	std::cin >> input;
	contact.setDarkestSecret(input);
	if (contact_count < 8)
	{
		contacts[contact_count] = contact;
		contact_count++;
	}
	else
	{
		contacts[oldest_index] = contact;
		oldest_index = (oldest_index + 1) % 8;
	}
}
void	PhoneBook::ShowContact(void)
{
	int	i = 0;
	std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << std::endl;
	while (i < contact_count)
	{
		std::cout << std::setw(10) << i << "|"
					<< std::setw(10) << truncateString(contacts[i].getFirstName()) << "|"
					<< std::setw(10) << truncateString(contacts[i].getLastName()) << "|"
					<< std::setw(10) << truncateString(contacts[i].getNickname()) << std::endl;
		i++;
	}
	if (i < 8)
	{
		while (i < 8)
		{
			std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << "" << "|"
				<< std::setw(10) << "" << "|"
				<< std::setw(10) << "" << std::endl;
			i++;
		}
	}
}

void	PhoneBook::ShowContactDetails(int index)
{
	if (index >= 0 && index < contact_count) {
		std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	} else {
		std::cout << "Invalid index!" << std::endl;
	}
}

