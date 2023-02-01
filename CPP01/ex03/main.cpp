/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/12 12:56:45 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/12 12:56:45 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "HumanA.h"
#include "HumanB.h"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    std::cout << "-----------" << std::endl;
    {
        Weapon gun = Weapon("AK-47");
        HumanB fighter("John Wick");
        fighter.setWeapon(gun);
        fighter.attack();
        gun.setType("M4A1");
        fighter.attack();
    }
    {
        Weapon gun = Weapon("Bazooka");
        HumanA fighter("Pacman", gun);
        fighter.attack();
        gun.setType("M4A1");
        fighter.attack();
    }



    return 0;
}