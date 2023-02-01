/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   WrongCat.h                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:31:39 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:31:39 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const & copy);
        ~WrongCat();
        WrongCat & operator=(WrongCat const & obj);
        void makeSound() const;
};

#endif