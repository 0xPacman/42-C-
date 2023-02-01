/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Conv.h                                            :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/29 13:06:55 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/29 13:06:55 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CONV_H
# define CONV_H

# include <iostream>
# include <exception>
# include <regex>
# include <string>
# include <cmath>

class conv
{
    private:
        std::string const	m_str;
    public:
        conv();
        conv(std::string str);
        conv(conv const & src);
        ~conv();
        conv &	operator=(conv const & obj);
        std::string		getStr() const;
        void			convert();
        class NotValidException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif