/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 04:06:30 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/11 04:20:20 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_H_
#define _SERIALIZER_H_

#include <iostream>
#include <stdint.h>

struct	Data
{
	int	value;
	std::string	name;
};

class	Serializer {
	public :
		Serializer();
		Serializer(const Serializer& value);
		Serializer& operator=(const Serializer& other);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif