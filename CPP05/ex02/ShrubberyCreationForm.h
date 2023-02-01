/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   ShrubberyCreationForm.h                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/27 09:14:52 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/27 09:14:52 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.h"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string m_target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
        std::string getTarget() const;
        class FileException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};

#endif