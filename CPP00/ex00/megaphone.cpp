/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   megaphone.cpp                                     :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: Invalid date        by                 #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/08 21:27:11 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    std::cout << (char)toupper(av[i][j]);
                else
                    std::cout << av[i][j];
            }
            if (i != ac - 1)
                std::cout << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
