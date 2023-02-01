/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/28 14:02:58 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/28 14:02:58 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Bureaucrat.h"
#include "AForm.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main()
{

    try
    {
        Intern someRandomIntern;
        AForm *rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        std::cout << "------------------------" << std::endl;

        // Bureaucrat b("ahmed", 1);
        // AForm *f = NULL;
        // f = someRandomIntern.makeForm("shrubbery creation", "home");
        // b.executeForm(*f);
        // delete f;
        std::cout << "------------------------" << std::endl;
        Intern slave;
        Bureaucrat b("king", 0);
        AForm *papers = slave.makeForm("Presidential pardon", "citizen");
        // b.signForm(*papers);
        b.executeForm(*papers);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}