/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:30:41 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:30:41 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"


int main()
{
    Animal *animals[20];
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 20; i++)
        std::cout << animals[i]->getType() << std::endl;
    for (int i = 0; i < 20; i++)
        animals[i]->makeSound();
    for (int i = 0; i < 20; i++) 
    {
        if (animals[i]->getType() == "Dog") 
        {
            Dog* dog = dynamic_cast<Dog*>(animals[i]);
            dog->isThinking(i, "food");
        }
        else if (animals[i]->getType() == "Cat") 
        {
            Cat* cat = dynamic_cast<Cat*>(animals[i]);
            cat->isThinking(i, "food");
        }
    }
    for (int i = 0; i < 20; i++)
        delete animals[i];

    std::cout << "----------------------------------------" << std::endl;

    Dog *dog = new Dog();
    Cat *cat = new Cat();
    dog->isThinking(1, "food");
    dog->isThinking(2, "ball");
    dog->isThinking(3, "toys");
    cat->isThinking(1, "food");
    cat->isThinking(2, "ball");
    cat->isThinking(3, "toys");
    delete dog;
    delete cat;

    std::cout << "----------------------------------------" << std::endl;

    Dog dog1;
    Dog cat2;

    dog1.isThinking(1, "food");
    cat2.isThinking(2, "ball");

    // std::cout << "----------------------------------------" << std::endl;

    // Animal animaltest;
    // animaltest.makeSound();

    return 0;
}