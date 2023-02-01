/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   RobotomyRequestForm.cpp                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/27 09:14:44 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/27 09:14:44 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), m_target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), m_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), m_target(src.m_target)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    if (this != &src)
    {
        m_target = src.m_target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == true)
    {
        throw RobotomyRequestForm::AlreadySignedException();
    }
    if (executor.getGrade() > this->getGrade2Execute() || executor.getGrade() > this->getGrade2Sign())
    {
        throw AForm::GradeTooLowException();
    }
    else
    {
        std::cout << "*drilling noises*" << std::endl;
        srand(time(NULL));
        int random = rand() % 2;
        if (random == 0)
        {
            std::cout << m_target << " has been robotomized successfully 50% of the time" << std::endl;
        }
        else
        {
            throw RobotomyRequestForm::RobotomyException();
        }
    }
}

const char * RobotomyRequestForm::RobotomyException::what() const throw()
{
    return "Robotomy failed!";
}

const char *RobotomyRequestForm::AlreadySignedException::what() const throw()
{
    return "Form is already signed";
}