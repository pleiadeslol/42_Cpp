/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:07:29 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/02/22 17:23:18 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H_
#define _BRAIN_H_

#include <iostream>

class	Brain {
	private :
		std::string ideas[100];
	public :
		Brain(std::string idea);
		Brain(const Brain& value);
		Brain& operator=(const Brain& other);
		std::string	getIdea(int i) const;
		~Brain();
};

#endif
