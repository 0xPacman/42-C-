/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   DiamondTrap.h                                     :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 15:38:05 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 15:38:05 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap();
        DiamondTrap & operator=(DiamondTrap const & obj);
        void attack(std::string const & target);
        void whoAmI();
};

#endif