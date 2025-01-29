/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:51:46 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/29 18:01:21 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <limits>
#include "contact.hpp"
#include <iomanip>

class PhoneBook {
	private :
		Contact	contacts[8];
		int		contact_count;
		int		oldest_index;
		std::string truncateString(const std::string& str) const {
        if (str.length() > 10)
            return str.substr(0, 9) + ".";
        return str;
    }
	public :
		PhoneBook() : contact_count(0), oldest_index(0) {}
		void	AddContact(Contact &contact);
		void	ShowContact(void);
		void	ShowContactDetails(int index);
		int		getContactCount() const {return contact_count; };
};

#endif