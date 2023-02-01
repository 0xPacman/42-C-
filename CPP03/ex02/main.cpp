/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 13:17:37 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 13:17:37 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"

int main()
{
    ClapTrap x0("0xPacman");
    ClapTrap x1(x0);
    ClapTrap x2;
    x1 = x2;
    x0.attack("Ghost");
    x0.takeDamage(5);
    x0.beRepaired(10);

    ScavTrap xx0("1xPacman");
    ScavTrap xx1(xx0);
    ScavTrap xx2;
    xx1 = xx2;
    xx0.attack("Ghost 1");
    xx0.takeDamage(5);
    xx0.guardGate();
    //a.showStats();
    FragTrap xxx0("2xPacman");
    FragTrap xxx1(xxx0);
    FragTrap xxx2;
    xxx1 = xxx2;
    xxx0.attack("Ghost");
    xxx0.takeDamage(2);
    xxx0.highFivesGuys();
    xxx0.showStats();
    return 0;
}