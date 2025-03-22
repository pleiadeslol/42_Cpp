/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:50:25 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/22 01:02:55 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	mergeInsertSortVector(std::vector<int>& arr) {
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
	std::vector<int> sortedArr;
	sortedArr.push_back(arr[0]);
	for (size_t i = 1; i < arr.size(); i += 2) {
		std::vector<int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), arr[i]);
		sortedArr.insert(it, arr[i]);
	}
	for (size_t i = 0; i < arr.size(); i += 2) {
		std::vector<int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), arr[i]);
		sortedArr.insert(it, arr[i]);
	}
	arr = sortedArr;
}

void	mergeInsertSortDeque(std::deque<int>& arr) {
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
	std::deque<int> sortedArr;
	sortedArr.push_back(arr[0]);
	for (size_t i = 1; i < arr.size(); i += 2) {
		std::deque<int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), arr[i]);
		sortedArr.insert(it, arr[i]);
	}
	for (size_t i = 0; i < arr.size(); i += 2) {
		std::deque<int>::iterator it = std::lower_bound(sortedArr.begin(), sortedArr.end(), arr[i]);
		sortedArr.insert(it, arr[i]);
	}
	arr = sortedArr;
}

std::vector<int>	parseArguments(int argc, char* argv[]) {
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
