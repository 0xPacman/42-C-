/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   HumanB.h                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/12 12:56:41 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/12 12:56:41 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &weapon);
    private:
        std::string name;
        Weapon *weapon;

};

#endif