/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   easyfind.h                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/31 18:37:10 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/31 18:37:10 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <vector>
# include <array>
# include <list>
# include <forward_list>
# include <deque>
# include <set>

class NotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return "Not Found";
        }
};

#endif