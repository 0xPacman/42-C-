/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Animal.cpp                                        :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:30:01 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:30:01 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Animal.h"

Animal::Animal()
{
    std::cout << GREEN << "Animal Default Constructor called" << NC << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << GREEN << "Animal Constructor called" << NC << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &copy)
{
    std::cout << GREEN << "Animal Copy Constructor called" << NC << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << GREEN << "Animal Assignation Operator called" << NC << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << RED << "Animal Destructor called" << NC << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

