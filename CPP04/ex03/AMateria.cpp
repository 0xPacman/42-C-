/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   AMateria.cpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:50:16 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:50:16 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "AMateria.h"

AMateria::AMateria(): type("default")
{
}

AMateria::AMateria(std::string const & type): type(type)
{
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator=(AMateria const & obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria use on " << target.getName() << std::endl;
}