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
#include "Form.h"

int main()
{
    // try
    // {
    //     for (int i = 1; i < 200; i++)
    //     {
    //         Bureaucrat student("pacman", i);
    //         std::cout << student;
    //     }
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    std::cout << "----------------------------------------" << std::endl;
    //another tests:
    try
    {
        Form f;
        Bureaucrat student("pacman", 1);
        //student.incrementGrade();
        //student.decrementGrade();
        Form form("the form", 150, 3);
        Form f2(f);
        f = form;
        std::cout << GREEN << f << NC << std::endl;
        student.signForm(form);
        std::cout << form << std::endl;
        std::cout << student << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}