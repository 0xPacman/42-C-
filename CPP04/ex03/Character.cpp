/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Character.cpp                                     :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 10:19:40 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 10:19:40 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "ICharacter.h"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        materials[i] = NULL;
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        materials[i] = NULL;
}

Character::Character(const Character &copy)
{
    for (int i = 0; i < 4; i++)
        materials[i] = NULL;
    *this = copy;
}

Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        this->name = obj.name;
        for (int i = 0; i < 4; i++)
        {
            if (obj.materials[i])
                this->materials[i] = obj.materials[i]->clone();
            else
                this->materials[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (materials[i])
            delete materials[i];
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!materials[i])
        {
            materials[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    if (materials[idx])
        materials[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return;
    if (materials[idx])
        materials[idx]->use(target);
}