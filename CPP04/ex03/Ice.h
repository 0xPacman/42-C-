/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Ice.h                                             :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 10:12:46 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 10:12:46 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ICE_H
# define ICE_H

# include "AMateria.h"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &obj);
        virtual ~Ice();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif