/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   PmergeMe.cpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/03/20 22:49:02 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/03/20 22:49:02 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "PmergeMe.h"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	*this = src;
}

PmergeMe::PmergeMe(int size,char **args)
{
	std::cout << "Before: ";
	for (int i = 1; args[i]; i++)
	{
		std::cout << args[i] << " ";
	}
	m_size = size;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=(PmergeMe const & obj)
{
	if (this != &obj)
	{
		m_set = obj.m_set;
		m_list = obj.m_list;
	}
	return *this;
}

std::array<long, m_size> PmergeMe::sortArray(std::array<long, m_size> array) {
    if (array.size() <= 1) {
        return array;
    }
    int mid = array.size() / 2;
    std::array<long, m_size> left, right;
    std::copy_n(array.begin(), mid, left.begin());
    std::copy_n(array.begin() + mid, array.size() - mid, right.begin());
    left = sortArray(left);
    right = sortArray(right);
    std::array<long, m_size> merged;
    int i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            merged[k++] = left[i++];
        } else {
            merged[k++] = right[j++];
        }
    }
    while (i < left.size()) {
        merged[k++] = left[i++];
    }
    while (j < right.size()) {
        merged[k++] = right[j++];
    }
    return merged;
}

