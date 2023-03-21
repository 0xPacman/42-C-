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

PmergeMe::PmergeMe(char **args)
{
	std::cout << "Before: ";
	for (int i = 1; args[i]; i++)
	{
		std::cout << args[i] << " ";
	}
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

// use merge sort to sort the set
std::set<long> PmergeMe::sortSet(std::set<long> set)
{
	
}