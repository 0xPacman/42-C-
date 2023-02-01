/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   AForm.h                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:02:41 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:02:41 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.h"

class Bureaucrat;

class AForm
{
    private:
        std::string const m_name;
        bool m_signed;
        int const m_grade2Sign;
        int const m_grade2Execute;
    public:
        AForm();
        AForm(std::string name, int grade2Sign, int grade2Execute);
        AForm(AForm const & src);
        AForm & operator=(AForm const & src);
        virtual ~AForm();
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
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & src);

#endif