/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:32:09 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 18:38:03 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_num(""), dark_secret("") {}

void Contact::setFirstName(const std::string& first_name)
{
	this->first_name = first_name;
}

void Contact::setLastName(const std::string& last_name)
{
	this->last_name = last_name;
}
void Contact::setNickname(const std::string& nickname)
{
	this->nickname = nickname;
}
void Contact::setPhoneNumber(const std::string& phone_num)
{
	this->phone_num = phone_num;
}
void Contact::setDarkestSecret(const std::string& dark_secret)
{
	this->dark_secret = dark_secret;
}

std::string Contact::getFirstName()
{
	return first_name;
}
std::string Contact::getLastName()
{
	return last_name;
}
std::string Contact::getNickname()
{
	return nickname;
}
std::string Contact::getPhoneNumber()
{
	return phone_num;
}
std::string Contact::getDarkestSecret()
{
	return dark_secret;
}
