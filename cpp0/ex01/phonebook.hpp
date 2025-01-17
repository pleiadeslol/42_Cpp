/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/17 18:14:28 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "limits"

class Contact {
	private :
		int		index = 0;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string dark_secret;
};

class PhoneBook {
	private :
		Contact	contact[8];
	public :
		void	AddContact(void);
		void	ShowContact(void);
};
