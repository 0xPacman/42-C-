/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 15:35:50 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 15:35:50 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */


#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"
#include "DiamondTrap.h"

int main()
{
    // ClapTrap x0("0xPacman");
    // x0.attack("Ghost");
    // x0.takeDamage(5);
    // x0.takeDamage(5);
    // x0.beRepaired(10);
    // DiamondTrap l0("Legend");
    // l0.attack("enemy");
    // l0.takeDamage(5);
    // l0.beRepaired(5);
    // l0.highFivesGuys();
    // l0.guardGate();
    // l0.whoAmI();
    DiamondTrap     diamond("Diamond");

        diamond.whoAmI();
        diamond.highFivesGuys();
        diamond.guardGate();
        diamond.attack("Frag");
        diamond.takeDamage(25);
        diamond.beRepaired(3);
        diamond.takeDamage(30);
        diamond.beRepaired(5);
    return 0;
}