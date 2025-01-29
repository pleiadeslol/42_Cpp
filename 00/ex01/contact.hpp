/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:27:47 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/01/29 18:00:50 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

class Contact {
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string dark_secret;
    public:
    Contact() : first_name(""), last_name(""), nickname(""), phone_num(""), dark_secret("") {}

    void setFirstName(const std::string& first_name) { this->first_name = first_name; }
    void setLastName(const std::string& last_name) { this->last_name = last_name; }
    void setNickname(const std::string& nickname) { this->nickname = nickname; }
    void setPhoneNumber(const std::string& phone_num) { this->phone_num = phone_num; }
    void setDarkestSecret(const std::string& dark_secret) { this->dark_secret = dark_secret; }

    std::string getFirstName() const { return first_name; }
    std::string getLastName() const { return last_name; }
    std::string getNickname() const { return nickname; }
    std::string getPhoneNumber() const { return phone_num; }
    std::string getDarkestSecret() const { return dark_secret; }
};

#endif