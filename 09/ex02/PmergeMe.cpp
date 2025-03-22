/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:50:25 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/22 01:17:40 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void mergeInsertSortVector(std::vector<int>& arr) {
	if (arr.size() <= 1) return;

	for (size_t i = 0; i < arr.size() - 1; i += 2) {
		if (arr[i] > arr[i + 1]) {
			std::swap(arr[i], arr[i + 1]);
		}
	}

	std::vector<int> largerElements;
	for (size_t i = 1; i < arr.size(); i += 2) {
		largerElements.push_back(arr[i]);
	}
	mergeInsertSortVector(largerElements);

	std::vector<int> sortedArr = largerElements;
	for (size_t i = 0; i < arr.size(); i += 2) {
		int smallerElement = arr[i];
		std::vector<int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), smallerElement);
		sortedArr.insert(it, smallerElement);
	}

	arr = sortedArr;
}

void mergeInsertSortDeque(std::deque<int>& arr) {
	if (arr.size() <= 1) return;

	for (size_t i = 0; i < arr.size() - 1; i += 2) {
		if (arr[i] > arr[i + 1]) {
			std::swap(arr[i], arr[i + 1]);
		}
	}

	std::deque<int> largerElements;
	for (size_t i = 1; i < arr.size(); i += 2) {
		largerElements.push_back(arr[i]);
	}
	mergeInsertSortDeque(largerElements);

	std::deque<int> sortedArr = largerElements;
	for (size_t i = 0; i < arr.size(); i += 2) {
		int smallerElement = arr[i];
		std::deque<int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), smallerElement);
		sortedArr.insert(it, smallerElement);
	}

	arr = sortedArr;
}

std::vector<int> parseArguments(int argc, char* argv[]) {
	std::vector<int> numbers;
	for (int i = 1; i < argc; ++i) {
		try {
			int num = std::atoi(argv[i]);
			if (num < 0) {
				throw std::invalid_argument("Negative number");
			}
			numbers.push_back(num);
		} catch (const std::exception& e) {
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}
	return numbers;
}
