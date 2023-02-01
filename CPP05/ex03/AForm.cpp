/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   AForm.cpp                                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:02:35 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:02:35 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "AForm.h"

AForm::AForm() : m_name("default"), m_signed(false), m_grade2Sign(150), m_grade2Execute(150)
{}

AForm::AForm(std::string name, int grade2Sign, int grade2Execute) : m_name(name), m_signed(false), m_grade2Sign(grade2Sign), m_grade2Execute(grade2Execute)
{
    if (grade2Sign < 1 || grade2Execute < 1)
        throw AForm::GradeTooHighException();
    if (grade2Sign > 150 || grade2Execute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src) : m_name(src.m_name), m_signed(src.m_signed), m_grade2Sign(src.m_grade2Sign), m_grade2Execute(src.m_grade2Execute)
{
    *this = src;
}

AForm & AForm::operator=(AForm const & src)
{
    if (this != &src)
    {
        this->m_signed = src.m_signed;
    }
    return *this;
}

AForm::~AForm()
{}

std::string AForm::getName() const
{
    return this->m_name;
}

bool AForm::getSigned() const
{
    return this->m_signed;
}

int AForm::getGrade2Sign() const
{
    return this->m_grade2Sign;
}

int AForm::getGrade2Execute() const
{
    return this->m_grade2Execute;
}

void AForm::beSigned(Bureaucrat const & bureaucrat)
{
    if (bureaucrat.getGrade() > this->m_grade2Sign || bureaucrat.getGrade() > this->m_grade2Execute)
        throw AForm::GradeTooLowException();
    else
        this->m_signed = true;
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream & operator<<(std::ostream & o, AForm const & src)
{
    o << "Form name: " << src.getName() << ", signed: " << src.getSigned() << ", grade to sign: " << src.getGrade2Sign() << ", grade to execute: " << src.getGrade2Execute();
    return o;
}

