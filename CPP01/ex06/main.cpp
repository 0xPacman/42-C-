/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/13 23:22:08 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/13 23:22:08 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Harl.h"

int main(int argc, char **argv)
{
    int i = 0;
    Harl test;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (argc != 2)
        std::cout << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
    while (levels[i] != argv[1] && i < 4)
        i++;
    for (int x = 0; x < 4; x++)
        std::transform(levels[x].begin(), levels[x].end(), levels[x].begin(), ::tolower);
    switch (i)
    {
        case 0:
            for (int j = i; j < 4; j++)
                test.complain(levels[j]);
            break;
        case 1:
            for (int j = i; j < 4; j++)
                test.complain(levels[j]);
            break;
        case 2:
            for (int j = i; j < 4; j++)
                test.complain(levels[j]);
            break;
        case 3:
            for (int j = i; j < 4; j++)
                test.complain(levels[j]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return 0;
}
