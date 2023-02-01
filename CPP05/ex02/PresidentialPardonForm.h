/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   PresidentialPardonForm.h                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/27 09:14:41 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/27 09:14:41 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "AForm.h"

class PresidentialPardonForm : public AForm
{
    private:
        std::string m_target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;


        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char * what() const throw();
        };
};


#endif