/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Bureaucrat.cpp                                    :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/25 13:07:15 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/25 13:07:15 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : m_name("default"), m_grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name), m_grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : m_name(b.m_name), m_grade(b.m_grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        m_grade = obj.m_grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return m_name;
}

int Bureaucrat::getGrade() const
{
    return m_grade;
}

void Bureaucrat::incrementGrade()
{
    if (m_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        m_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (m_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        m_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return o;
}

void Bureaucrat::signForm(Form &obj) const
{
    try
    {
        obj.beSigned(*this);
        std::cout << m_name << " signs " << obj.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << m_name << " cannot sign " << obj.getName() << " because " << e.what() << std::endl;
    }
}