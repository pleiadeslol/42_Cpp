/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarhoun <rzarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 02:50:25 by rzarhoun          #+#    #+#             */
/*   Updated: 2025/03/15 02:55:34 by rzarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	insertSort(std::vector<int>& arr)
{
	for (size_t i = 0; i < arr.size(); i++)
	{
		size_t j = i - 1;
		int current = arr[i];
		while (j >= 0 && arr[j] > current)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

void	mergeSort(std::vector<int>& arr)
{
	std::vector<int> left;
	std::vector<int> right;
	size_t i = 0;
	size_t j = 0;
	for (; i < arr.size(); i++)
	{
		if (i < arr.size() / 2)
			left[i] = arr[i];
		else
		{
			right[j] = arr[i];
			j++;
		}
	}
	mergeSort(left);
	mergeSort(right);
	merge(left, right, arr);
}
