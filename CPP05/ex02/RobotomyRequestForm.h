/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   RobotomyRequestForm.h                             :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/27 09:14:47 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/27 09:14:47 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "AForm.h"

class RobotomyRequestForm : public AForm
{
    private:
        std::string m_target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
        std::string getTarget() const;
        class RobotomyException : public std::exception
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