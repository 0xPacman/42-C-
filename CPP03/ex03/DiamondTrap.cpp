/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   DiamondTrap.cpp                                   :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 15:38:02 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 15:38:02 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap()
{
    std::cout << GREEN << "DiamondTrap Default constructor called" << NC << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << GREEN << "DiamondTrap Constructor called" << NC << std::endl;
    this->ClapTrap::m_name = name + "_clap_name";
    this->_name = name;
    this->m_hitPoints = FragTrap::m_hitPoints;
    this->m_energyPoints = ScavTrap::m_energyPoints;
    this->m_attackDamage = FragTrap::m_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    std::cout << GREEN << "DiamondTrap Copy constructor called" << NC << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap Destructor called" << NC << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & obj)
{
    std::cout << GREEN << "DiamondTrap Assignation operator called" << NC << std::endl;
    if (this != &obj)
    {
        this->m_name = obj.m_name;
        this->m_hitPoints = obj.m_hitPoints;
        this->m_energyPoints = obj.m_energyPoints;
        this->m_attackDamage = obj.m_attackDamage;
    }
    return *this;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->_name << std::endl;
    std::cout << "ClapTrap name: " << this->ClapTrap::m_name << std::endl;
}