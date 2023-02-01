/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   ShrubberyCreationForm.cpp                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:03:35 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:03:35 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), m_target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), m_target(src.m_target)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    if (this != &src)
    {
        m_target = src.m_target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == true)
    {
        throw ShrubberyCreationForm::AlreadySignedException();
    }
    if (executor.getGrade() > this->getGrade2Execute() || executor.getGrade() > this->getGrade2Sign())
    {
        throw AForm::GradeTooLowException();
    }
    else
    {
        std::string STAR = "\e[5;33m*\e[0m\e[1;32m";
        std::string O = "\e[0m\e[1;31mo\e[0m\e[1;32m";
        std::string RED = "\e[31m";

        std::string filename = m_target + "_shrubbery";
        std::ofstream file(filename, std::ios::out | std::ios::trunc);
        if (!file)
            throw ShrubberyCreationForm::FileException();
        std::string output = "       " + STAR + "           " + STAR + "\n"
        + "      /.\\" + "         " + "/.\\" + "\n" 
        + "     /" + O + "..\\" + "       " + "/." + O + ".\\" + "\n" 
        + "     /.." + O + "\\" + "       " + "/.." + O + "\\" + "\n" 
        + "    /." + O + ".." + O + "\\" + "     " + "/." + O + ".." + O + "\\" + "\n" 
        + "    /..." + O + ".\\" + "    " + " /..." + O + ".\\" + "\n" 
        + "   /.." + O + "....\\" + "   " + "/.." + O + "....\\" + "\n" 
        + "   ^^^[_]^^^" + "   " + "^^^[_]^^^" + "\n" + "   " 
        + RED + "|||" + GREEN + "|||" + RED + "|||" + "   " + RED + "|||" + GREEN + "|||" + RED + "|||" + NC;
        file << output;
        file.close();
    }
}

const char * ShrubberyCreationForm::FileException::what() const throw()
{
    return "File cannot be opened!";
}

const char * ShrubberyCreationForm::AlreadySignedException::what() const throw()
{
    return "Already signed!";
}