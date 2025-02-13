/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:31 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/13 22:36:32 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.hpp"

class	Dog : public Animal {
	public :
		Dog();
		Dog(const Dog& value);
		Dog& operator=(const Dog& other);
		void	makeSound() const;
		~Dog();
};

#endif