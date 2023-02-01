/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Bureaucrat.h                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 19:22:28 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 19:22:28 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>
# include <string>

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
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & obj);

#endif