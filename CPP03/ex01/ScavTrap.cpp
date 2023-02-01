/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   ScavTrap.cpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/19 15:09:39 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/19 15:09:39 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << GREEN << "ScavTrap Default constructor called" << NC << std::endl;
    this->m_name = "Default";
    this->m_hitPoints = 100;
    this->m_energyPoints = 50;
    this->m_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN << "ScavTrap Constructor called" << NC << std::endl;
    this->m_name = name;
    this->m_hitPoints = 100;
    this->m_energyPoints = 50;
    this->m_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << GREEN << "ScavTrap Copy constructor called" << NC << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap Destructor called" << NC << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & obj)
{
    std::cout << GREEN << "ScavTrap Assignation operator called" << NC << std::endl;
    if (this != &obj)
    {
        this->m_name = obj.m_name;
        this->m_hitPoints = obj.m_hitPoints;
        this->m_energyPoints = obj.m_energyPoints;
        this->m_attackDamage = obj.m_attackDamage;
    }
    return *this;
}

void ScavTrap::attack(std::string const & target)
{
    if (this->m_energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of damage!" << std::endl;
        this->m_energyPoints--;
    }
    else
        std::cout << "ScavTrap " << this->m_name << " has no energy to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->m_name << " is now in Gate keeper mode" << std::endl;
}
