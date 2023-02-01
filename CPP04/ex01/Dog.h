/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Dog.h                                             :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 13:18:58 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 13:18:58 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef DOG_H
# define DOG_H

# include "Animal.h"
# include "Brain.h"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const & copy);
        ~Dog();
        Dog & operator=(Dog const & obj);
        virtual void makeSound() const;
        void isThinking(int i, std::string idea);
};

#endif