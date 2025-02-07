/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:27:47 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 22:09:05 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

#include <iostream>

class Contact {
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string dark_secret;
	public:
		Contact();

		void setFirstName(const std::string& first_name);
		void setLastName(const std::string& last_name);
		void setNickname(const std::string& nickname);
		void setPhoneNumber(const std::string& phone_num);
		void setDarkestSecret(const std::string& dark_secret);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

#endif