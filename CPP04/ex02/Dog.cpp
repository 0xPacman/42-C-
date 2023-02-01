/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Dog.cpp                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:30:25 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:30:25 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Dog.h"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN << "Dog constructor called" << NC << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << GREEN << "Dog Copy Constructor called" << NC << std::endl;
    this->brain = new Brain(*copy.brain);
    *this = copy;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << GREEN << "Dog Assignation Operator called" << NC << std::endl;
    if (this != &obj)
    {
        delete this->brain;
        this->type = obj.type;
        this->brain = new Brain(*obj.brain);
        return (*this);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << RED << "Dog Destructor called" << NC << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog 🐕 sound: Haw! Haw!" << std::endl;
}

void Dog::isThinking(int i, std::string idea)
{
    brain->setIdea(i, idea);
    std::cout << "Dog 🐕 is thinking about " << brain->getIdea(i) << std::endl;
}