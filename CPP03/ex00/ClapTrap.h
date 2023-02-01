/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   ClapTrap.h                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/19 12:49:05 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/19 12:49:05 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define NC "\033[0m"

# include <iostream>

class ClapTrap
{
    private:
        std::string m_name;
        int m_hitPoints;
        int m_energyPoints;
        int m_attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const & obj);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void showStats();
};

#endif