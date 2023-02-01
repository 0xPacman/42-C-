/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Intern.cpp                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:16:52 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:16:52 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Intern.h"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern & Intern::operator=(Intern const & src)
{
    if (this != &src)
    {
        (void)src;
    }
    return *this;
}

Intern::~Intern()
{
}

std::string ft_tolower(std::string str)
{
    std::string res = str;
    for (int i = 0; res[i]; i++)
    {
        if (res[i] >= 'A' && res[i] <= 'Z')
            res[i] += 32;
    }
    return res;
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int i = 0;
    std::string lowerformName = ft_tolower(formName);
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*funcs[3])(std::string) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
    while (i < 3 && forms[i] != lowerformName)
        i++;
    return (i < 3) ? (this->*funcs[i])(target) : throw UnknownFormException();
}

const char* Intern::UnknownFormException::what() const throw()
{
    return "Unknown form";
}

AForm* Intern::makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}
