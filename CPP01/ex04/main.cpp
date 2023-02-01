/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/12 15:24:41 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/12 15:24:41 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "bettersed.h"

int main()
{
    std::string s1, s2, filename;

    std::cout << "Enter the filename: ";
    std::cin >> filename;
    std::cout << "Enter the string to replace (s1): ";
    std::cin >> s1;
    std::cout << "Enter the string to replace with (s2): ";
    std::cin >> s2;

    bettersed(filename, s1, s2);
}