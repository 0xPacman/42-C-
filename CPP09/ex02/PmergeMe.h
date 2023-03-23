/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   PmergeMe.h                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/03/20 22:49:14 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/03/20 22:49:14 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

# ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <vector>
#include <deque>
#include <chrono>
#include <time.h>
#include <sys/time.h>
class PmergeMe
{
	private:
		int m_size;

		std::deque<int> m_deque;

		std::deque<long> fillDeque(char **nums);
		std::deque<long> sortDeque(std::deque<long> nums);
		std::vector<long> fillVect(char **nums);
		std::vector<long> sortVector(std::vector<long> nums);
		std::deque<long> insertion_sort_deque(std::deque<long> nums);
		std::vector<long> insertion_sort_vector(std::vector<long> nums);
	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		PmergeMe(int size, char **args);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & obj);
		int checkArg(char **arg);
};

#endif