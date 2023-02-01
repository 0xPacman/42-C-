/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Dog.cpp                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 11:33:11 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 11:33:11 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Dog.h"

Dog::Dog() : Animal("Dog")
{
    std::cout << GREEN << "Dog constructor called" << NC << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << GREEN << "Dog Copy Constructor called" << NC << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << GREEN << "Dog Assignation Operator called" << NC << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << RED << "Dog Destructor called" << NC << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog 🐕 sound: Haw! Haw!" << std::endl;
}