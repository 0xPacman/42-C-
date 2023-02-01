/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   PresidentialPardonForm.cpp                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:03:11 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:03:11 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), m_target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), m_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), m_target(src.m_target)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    if (this != &src)
    {
        m_target = src.m_target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (getSigned() == true)
    {
        throw PresidentialPardonForm::AlreadySignedException();
    }
    if (executor.getGrade() > this->getGrade2Execute() || executor.getGrade() > this->getGrade2Sign())
    {
        throw AForm::GradeTooLowException();
    }
    else
        std::cout << m_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::AlreadySignedException::what() const throw()
{
    return "Form is already signed";
}