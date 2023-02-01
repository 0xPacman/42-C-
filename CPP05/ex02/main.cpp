/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/25 13:07:33 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/25 13:07:33 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


int main()
{

    try
    {
        Bureaucrat b("ahmed", 1);
        AForm *f = new ShrubberyCreationForm("home");
       //b.executeForm(*f);
        b.signForm(*f);
        b.executeForm(*f);
        delete f;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("ahmed", 1);
        AForm *f = new RobotomyRequestForm("test");
        b.executeForm(*f);
        delete f;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------------------------------" << std::endl;
    try
    {
        Bureaucrat b("ahmed", 1);
        AForm *f = new PresidentialPardonForm("test");
        b.executeForm(*f);
        delete f;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}