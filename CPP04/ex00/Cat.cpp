/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Cat.cpp                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 11:33:05 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 11:33:05 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Cat.h"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN << "Cat constructor called" << NC << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << GREEN << "Cat Copy Constructor called" << NC << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << GREEN << "Cat Assignation Operator called" << NC << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << RED << "Cat Destructor called" << NC << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat 🐈 sound: Meow! Meow!" << std::endl;
}
