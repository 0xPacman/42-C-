/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   MateriaSource.cpp                                 :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 10:29:39 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 10:29:39 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "IMateriaSource.h"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materials[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
        materials[i] = NULL;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    if (this != &obj)
    {
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

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materials[i])
            delete materials[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (materials[i] == NULL)
        {
            materials[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materials[i] && materials[i]->getType() == type)
            return materials[i]->clone();
    }
    return NULL;
}