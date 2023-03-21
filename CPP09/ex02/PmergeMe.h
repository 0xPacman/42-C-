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
#include <set>
#include <list>
class PmergeMe
{
	private:
		std::set<long> m_set;
		std::list<long> m_list;
		std::set<long> sortSet(std::set<long> set);
		std::list<long> sortList(std::list<long> list);
	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		PmergeMe(char **args);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & obj);
};


#endif