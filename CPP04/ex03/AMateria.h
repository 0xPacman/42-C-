/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   AMateria.h                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:50:14 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:50:14 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef AMATERIA_H
# define AMATERIA_H

#define NC "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

# include <iostream>
# include "ICharacter.h"

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &obj);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif