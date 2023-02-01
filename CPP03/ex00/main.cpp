/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/19 12:49:02 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/19 12:49:02 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "ClapTrap.h"

int main()
{
    ClapTrap a("Pacman");
    ClapTrap b(a); 
    ClapTrap c;
    c = a;
    a.attack("Ghost");
    a.takeDamage(5);
    a.takeDamage(5);
    a.takeDamage(8);
    a.beRepaired(10);
    a.beRepaired(100);
    a.beRepaired(100);
    //a.takeDamage(20);
    // a.attack("Ghost");
    // a.attack("Ghost");
    // a.attack("Ghost");
    // a.attack("Ghost");
    // a.attack("Ghost");
    c.showStats();
    // b.takeDamage(5);
    // a.attack("Ghost");
    return 0;
}