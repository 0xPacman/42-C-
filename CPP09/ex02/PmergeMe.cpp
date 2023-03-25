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
	m_size = size;
    clock_t start, end;
    if (!checkArg(args))
        return;
	std::cout << "Before:  ";
	for (int i = 1; args[i]; i++)
	{
        if (i == size)
            std::cout << args[i];
        else
            std::cout << args[i] << " ";
	}
    std::deque<long> nums = fillDeque(args);
    std::deque<long> sorted = sortDeque(nums);
    std::vector<long> nums2 = fillVect(args);
    std::cout << std::endl;
    std::cout << "After:   ";
    for (int i = 0; i < size; i++)
    {   
        
            // break;
        if (i == size - 1)
            std::cout << sorted[i];
        else
            std::cout << sorted[i] << " ";
    }

    start = clock();
    std::deque<long> sortedx = sortDeque(nums);
    end = clock();
    double dur = ((double) (end - start)) / CLOCKS_PER_SEC;
    std::cout << std::endl;
    std::cout.precision(5);
    std::cout.setf(std::ios::fixed);
    std::cout << "Time to process a range of " << size << " elements with std::deque  : " << dur * 1000000 << " us" << std::endl;
    start = clock();
    std::vector<long> sortedy = sortVector(nums2);
    end = clock();
    dur = ((double) (end - start)) / CLOCKS_PER_SEC;
    std::cout.precision(5);
    std::cout.setf(std::ios::fixed);
    std::cout << "Time to process a range of " << size << " elements with std::vector : " << dur * 1000000 << " us" << std::endl;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=(PmergeMe const & obj)
{
	if (this != &obj)
	{
		m_size = obj.m_size;
		m_deque = obj.m_deque;
	}
	return *this;
}

int PmergeMe::checkArg(char **arg)
{
    for (int i = 1; i <= m_size; i++)
    {
        std::string str(arg[i]);
        for (size_t j = 0; j < strlen(str.c_str()); j++)
        {
            if (isdigit(str[j]) == false)
            {
                std::cout << "Error: Invalid argument" << std::endl;
                return 0;
            }
        }
    }
    return 1;
}

std::deque<long> PmergeMe::fillDeque(char **nums)
{
    std::deque<long> deque;
    for (int i = 1; i <= m_size; i++)
    {
        std::string str(nums[i]);
        deque.push_back(std::atol(str.c_str()));
    }
    return deque;
}

std::deque<long> PmergeMe::insertion_sort_deque(std::deque<long> nums)
{
    size_t i = 0;
    size_t j = 0;

    for (i = 1; i < nums.size(); i++)
    {
        j = i;
        while (j > 0 && nums[j] < nums[j - 1])
        {
            std::swap(nums[j], nums[j - 1]);
            j--;
        }
    }
    return nums;
}

std::deque<long> PmergeMe::sortDeque(std::deque<long> nums)
{
    int size = nums.size();
    if (size <= 10)
        return insertion_sort_deque(nums);
    std::deque<long> left;
    std::deque<long> right;
    for (int i = 0; i < size / 2; i++)
    {
        left.push_back(nums[i]);
    }
    for (int i = size / 2; i < size; i++)
    {
        right.push_back(nums[i]);
    }
    left = sortDeque(left);
    right = sortDeque(right);


    std::deque<long> sorted;
    while (left.size() && right.size())
    {
        if (left.front() < right.front())
        {
            sorted.push_back(left.front());
            left.pop_front();
        }
        else
        {
            sorted.push_back(right.front());
            right.pop_front();
        }
    }
    if (left.size())
    {
        sorted.insert(sorted.end(), left.begin(), left.end());
    }
    if (right.size())
    {
        sorted.insert(sorted.end(), right.begin(), right.end());
    }
    return sorted;
}


std::vector<long> PmergeMe::fillVect(char **nums)
{
    std::vector<long> vec;
    for (int i = 1; i <= m_size; i++)
    {
        std::string str(nums[i]);
        vec.push_back(std::atol(str.c_str()));
    }
    return vec;
}

std::vector<long> PmergeMe::insertion_sort_vector(std::vector<long> nums)
{
    size_t i = 0;
    size_t j = 0;

    for (i = 1; i < nums.size(); i++)
    {
        j = i;
        while (j > 0 && nums[j] < nums[j - 1])
        {
            std::swap(nums[j], nums[j - 1]);
            j--;
        }
    }
    return nums;
}

std::vector<long> PmergeMe::sortVector(std::vector<long> nums)
{
    int size = nums.size();
    if (size <= 10)
        return insertion_sort_vector(nums);
    std::vector<long> left;
    std::vector<long> right;
    for (int i = 0; i < size / 2; i++)
    {
        left.push_back(nums[i]);
    }
    for (int i = size / 2; i < size; i++)
    {
        right.push_back(nums[i]);
    }
    left = sortVector(left);
    right = sortVector(right);

    std::vector<long> sorted;
    while (left.size() && right.size())
    {
        if (left.front() < right.front())
        {
            sorted.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            sorted.push_back(right.front());
            right.erase(right.begin());
        }
    }
    if (left.size())
    {
        sorted.insert(sorted.end(), left.begin(), left.end());
    }
    if (right.size())
    {
        sorted.insert(sorted.end(), right.begin(), right.end());
    }
    return sorted;
}