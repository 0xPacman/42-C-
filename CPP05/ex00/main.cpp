/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 19:22:31 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 19:22:31 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */
 
#include "Bureaucrat.h"

int main()
{
    try
    {
        for (int i = 1; i < 200; i++)
        {
            Bureaucrat student("pacman", i);
            std::cout << student;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;
    //another tests:
    try
    {
        Bureaucrat student("pacman", 1);
        std::cout << student;
        student.incrementGrade();
        std::cout << student;
        student.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}