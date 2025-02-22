/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:47:21 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 18:16:08 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	private :
		Brain *brain;
	public :
		Cat(std::string idea);
		Cat(const Cat& value);
		Cat& operator=(const Cat& other);
		void	makeSound() const;
		Brain&	getBrain(void);
		~Cat();
};

#endif
