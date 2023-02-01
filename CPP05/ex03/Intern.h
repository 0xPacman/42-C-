/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Intern.h                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:16:49 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:16:49 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef INTERN_H
# define INTERN_H

# include "AForm.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & src);
        ~Intern();
        AForm* makeForm(std::string formName, std::string target);

        AForm* makeShrubberyCreationForm(std::string target);
        AForm* makeRobotomyRequestForm(std::string target);
        AForm* makePresidentialPardonForm(std::string target);
        
        class UnknownFormException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };

};

typedef AForm* (Intern::*func)(std::string);

#endif