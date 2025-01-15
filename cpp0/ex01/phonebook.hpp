/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/15 15:38:25 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Contact {
	private :
		int		index = 0;
		char	first_name[50];
		char	last_name[50];
		char	nickname[50];
		char	phone_num[50];
		char	dark_secret[100];
	public :
		void	AddContact();
		void	ShowContact();
};

class PhoneBook {
	private :
		Contact	contact[8];
};
