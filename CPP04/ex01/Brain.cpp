/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Brain.cpp                                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/21 14:29:39 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/21 14:29:39 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Brain.h"

Brain::Brain()
{
    std::cout << GREEN << "Brain constructor called" << NC << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << GREEN << "Brain Copy Constructor called" << NC << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << GREEN << "Brain Assignation Operator called" << NC << std::endl;
    if (this != &obj)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << RED << "Brain Destructor called" << NC << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    return (this->ideas[i]);
}

