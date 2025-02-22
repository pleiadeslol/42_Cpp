/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:44:42 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:21:37 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>

class	Animal {
	protected :
		std::string	type;
	public :
		Animal();
		Animal(const Animal& value);
		Animal& operator=(const Animal& other);
		virtual void	makeSound() const = 0;
		void	setType(std::string _type);
		std::string	getType(void) const;
		virtual ~Animal();
};

#endif