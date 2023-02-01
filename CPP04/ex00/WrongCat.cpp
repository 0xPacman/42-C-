/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   WrongCat.cpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 11:59:05 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 11:59:05 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "WrongCat.h"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << GREEN << "WrongCat constructor called" << NC << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
    std::cout << GREEN << "WrongCat Copy Constructor called" << NC << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << GREEN << "WrongCat Assignation Operator called" << NC << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << RED << "WrongCat Destructor called" << NC << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat 🙀 sound" << std::endl;
}
