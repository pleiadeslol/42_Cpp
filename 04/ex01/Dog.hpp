/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:31 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:16:01 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	private :
		Brain *brain;
	public :
		Dog(std::string idea);
		Dog(const Dog& value);
		Dog& operator=(const Dog& other);
		void	makeSound() const;
		Brain&	getBrain(void);
		~Dog();
};

#endif