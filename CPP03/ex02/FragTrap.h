/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   FragTrap.h                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 12:56:53 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 12:56:53 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap();
        FragTrap & operator=(FragTrap const & obj);
        void attack(std::string const & target);
        void highFivesGuys();
};

#endif