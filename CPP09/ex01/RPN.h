/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   RPN.h                                             :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/03/20 17:34:40 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/03/20 17:34:40 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <fstream>
# include <string>
# include <list>
# include <sstream>
# include <ctime>
#include <dirent.h>
#include <stdbool.h>

class RPN
{
	private:
		std::list<int> m_exp;
		bool	checkArg(std::string arg);
		int		postfix(std::string arg);
	public:
		RPN();
		RPN(std::string name);
		RPN(RPN const & src);
		~RPN();
		RPN & operator=(RPN const & obj);
		void debug();
};

#endif
