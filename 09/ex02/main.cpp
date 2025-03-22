/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 00:48:43 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/22 01:16:07 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <positive integers>" << std::endl;
		return 1;
	}

	std::vector<int> numbers = parseArguments(argc, argv);

	std::cout << "Before: ";
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::vector<int> vec = numbers;
	clock_t start = clock();
	mergeInsertSortVector(vec);
	clock_t end = clock();
	double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

	std::deque<int> deq(numbers.begin(), numbers.end());
	start = clock();
	mergeInsertSortDeque(deq);
	end = clock();
	double dequeTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

	std::cout << "After: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << numbers.size() << " elements with std::vector: " << vectorTime << " us" << std::endl;
	std::cout << "Time to process a range of " << numbers.size() << " elements with std::deque: " << dequeTime << " us" << std::endl;

	return 0;
}