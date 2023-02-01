/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Bureaucrat.h                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/25 13:07:25 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/25 13:07:25 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#define GREEN "\033[0;32m"
#define NC "\033[0m"

# include <iostream>
# include <exception>
# include <string>
# include "AForm.h"

class AForm;

class Bureaucrat
{
    private:
        std::string const	m_name;
        int					m_grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat &	operator=(Bureaucrat const & obj);
        std::string		getName() const;
        int				getGrade() const;
        void			incrementGrade();
        void			decrementGrade();
        void			signForm(AForm & obj) const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        void executeForm(AForm const & form) const;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & obj);

#endif