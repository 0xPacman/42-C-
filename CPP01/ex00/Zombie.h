/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Zombie.h                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/11 10:28:00 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/11 10:28:00 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce();

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif