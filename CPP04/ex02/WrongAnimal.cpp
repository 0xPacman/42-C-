/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   WrongAnimal.cpp                                   :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:31:21 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:31:21 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
    std::cout << GREEN << "WrongAnimal constructor called" << NC << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << GREEN << "WrongAnimal constructor called" << NC << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << GREEN << "WrongAnimal Copy Constructor called" << NC << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << GREEN << "WrongAnimal Assignation Operator called" << NC << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << RED << "WrongAnimal Destructor called" << NC << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}