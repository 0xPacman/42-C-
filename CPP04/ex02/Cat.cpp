/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Cat.cpp                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:30:14 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:30:14 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Cat.h"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "Cat constructor called" << NC << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << GREEN << "Cat Copy Constructor called" << NC << std::endl;
    this->brain = new Brain(*copy.brain);
    *this = copy;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << GREEN << "Cat Assignation Operator called" << NC << std::endl;
    if (this != &obj)
    {
        delete this->brain;
        this->type = obj.type;
        this->brain = new Brain(*obj.brain);
        return (*this);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << RED << "Cat Destructor called" << NC << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat 🐈 sound: Meow! Meow!" << std::endl;
}

void Cat::isThinking(int i, std::string idea)
{
    brain->setIdea(i, idea);
    std::cout << "Cat 🐈 is thinking about " << brain->getIdea(i) << std::endl;}