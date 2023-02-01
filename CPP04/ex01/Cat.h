/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Cat.h                                             :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 13:18:43 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 13:18:43 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef CAT_H
# define CAT_H

# include "Animal.h"
# include "Brain.h"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const & copy);
        ~Cat();
        Cat & operator=(Cat const & obj);
        virtual void makeSound() const;
        void isThinking(int i, std::string idea);
};

#endif