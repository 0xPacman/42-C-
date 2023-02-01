/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Cure.h                                            :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 10:12:48 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 10:12:48 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CURE_H
# define CURE_H

# include "AMateria.h"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &obj);
        virtual ~Cure();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif