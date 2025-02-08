/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/07 19:02:38 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

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