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
#include <array>
#include <deque>
class PmergeMe
{
	private:
		int m_size;
		std::array<int, m_size> m_array;
		std::deque<int> m_deque;
		std::array<long, m_size> sortArray(std::array<long, m_size> array);
		std::deque<long> sortDeque(std::deque<long> deque);
	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		PmergeMe(int size, char **args);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & obj);
};


#endif