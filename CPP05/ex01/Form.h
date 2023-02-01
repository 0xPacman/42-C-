/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Form.h                                            :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/25 13:11:38 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/25 13:11:38 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
    private:
        std::string const m_name;
        bool m_signed;
        int const m_grade2Sign;
        int const m_grade2Execute;
    public:
        Form();
        Form(std::string name, int grade2Sign, int grade2Execute);
        Form(Form const & src);
        Form & operator=(Form const & src);
        ~Form();
        std::string getName() const;
        bool getSigned() const;
        int getGrade2Sign() const;
        int getGrade2Execute() const;
        void beSigned(Bureaucrat const & src);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};

std::ostream & operator<<(std::ostream & o, Form const & src);

#endif