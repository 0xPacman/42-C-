/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Form.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/25 13:10:57 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/25 13:10:57 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Form.h"

Form::Form() : m_name("default"), m_signed(false), m_grade2Sign(150), m_grade2Execute(150)
{
    std::cout << GREEN <<"Default form has been created with Grade to sign: "  << this-> m_grade2Sign << " and with Grade to execute: " << this-> m_grade2Execute << NC << std::endl;
}

Form::Form(std::string name, int grade2Sign, int grade2Execute) : m_name(name), m_signed(false), m_grade2Sign(grade2Sign), m_grade2Execute(grade2Execute)
{
    if (grade2Sign < 1 || grade2Execute < 1)
        throw Form::GradeTooHighException();
    if (grade2Sign > 150 || grade2Execute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : m_name(src.m_name), m_signed(src.m_signed), m_grade2Sign(src.m_grade2Sign), m_grade2Execute(src.m_grade2Execute)
{
    *this = src;
}

Form & Form::operator=(Form const & src)
{
    if (this != &src)
    {
        this->m_signed = src.m_signed;
    }
    return *this;
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return this->m_name;
}

bool Form::getSigned() const
{
    return this->m_signed;
}

int Form::getGrade2Sign() const
{
    return this->m_grade2Sign;
}

int Form::getGrade2Execute() const
{
    return this->m_grade2Execute;
}

void Form::beSigned(Bureaucrat const & src)
{
    if (src.getGrade() > this->m_grade2Sign)
        throw Form::GradeTooLowException();
    this->m_signed = true;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream & operator<<(std::ostream & o, Form const & src)
{
    o << "Form name: " << src.getName() << ", signed: " << src.getSigned() << ", grade to sign: " << src.getGrade2Sign() << ", grade to execute: " << src.getGrade2Execute();
    return o;
}
