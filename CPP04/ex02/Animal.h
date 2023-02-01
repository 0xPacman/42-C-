/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Animal.h                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:29:27 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:29:27 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

#define NC "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &obj);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif