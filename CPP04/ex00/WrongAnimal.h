/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   WrongAnimal.h                                     :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 11:59:02 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 11:59:02 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

#define NC "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal & copy);
        WrongAnimal &operator=(WrongAnimal const & obj);
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};

#endif