/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 18:40:44 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <limits>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
	private :
		Contact	contacts[8];
		int		contact_count;
		int		oldest_index;
		std::string truncateString(const std::string& str);
	public :
		PhoneBook() : contact_count(0), oldest_index(0) {}
		void	AddContact(Contact &contact);
		void	ShowContact(void);
		void	ShowContactDetails(int index);
		int		getContactCount();
};

#endif