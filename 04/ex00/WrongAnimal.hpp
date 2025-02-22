/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 00:13:09 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 16:50:44 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_H_
#define _WRONGANIMAL_H_

#include <iostream>

class	WrongAnimal {
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& value);
		WrongAnimal& operator=(const WrongAnimal& other);
		void	makeSound() const;
		void	setType(std::string _type);
		std::string	getType(void) const;
		~WrongAnimal();
};

#endif
