/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 03:15:21 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 00:02:19 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_H_
#define _MUTANTSTACK_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T> {
	private :
		std::stack<T>	stack;
	public :
		typedef	typename std::stack<T>::container_type::iterator iterator;
		typedef	typename std::stack<T>::container_type::const_iterator const_iterator;

		typedef	typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef	typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
		MutantStack(): stack(std::stack<T>()) {};
		MutantStack(MutantStack& value) {*this = value;};
		MutantStack& operator=(MutantStack& other) {
			if (this != &other)
				stack = other.stack;
			return (*this);
		}
		~MutantStack() {};
		std::stack<T> getStack() {return (stack);};
		iterator begin() {return (std::stack<T>::c.begin());};
		iterator end() {return (std::stack<T>::c.end());};
		const_iterator begin() const {return (std::stack<T>::c.begin());};
		const_iterator end() const {return (std::stack<T>::c.end());};
		reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());};
		reverse_iterator rend() {return (std::stack<T>::c.rend());};
		const_reverse_iterator rbegin() const {return (std::stack<T>::c.rbegin());};
		const_reverse_iterator rend() const {return (std::stack<T>::c.rend());};
};

#endif