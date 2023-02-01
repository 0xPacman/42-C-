/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   ClapTrap.cpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 15:35:28 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 15:35:28 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */


#include "ClapTrap.h"

ClapTrap::ClapTrap() : m_name("Default"), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
    std::cout << GREEN << "ClapTrap Default constructor called" << NC << std::endl;
}

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
    std::cout << GREEN << "ClapTrap Constructor called" << NC << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << GREEN << "ClapTrap Copy constructor called" << NC << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap Destructor called" << NC << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & obj)
{
    std::cout << GREEN << "ClapTrap Assignation operator called" << NC << std::endl;
    if (this != &obj)
    {
        m_name = obj.m_name;
        m_hitPoints = obj.m_hitPoints;
        m_energyPoints = obj.m_energyPoints;
        m_attackDamage = obj.m_attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    if (m_energyPoints > 0)
    {
        std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamage << " points of damage!" << std::endl;
        m_energyPoints--;
    }
    else
        std::cout << "ClapTrap " << m_name << " has no energy to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (m_hitPoints > 0 )
    {
        std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
        m_hitPoints -= amount;
        if (m_hitPoints <= 0)
        {
            m_hitPoints = 0;
            std::cout << "ClapTrap " << m_name << " is "<< RED << "dead!" << NC << std::endl;
        }
    }
    else
        std::cout << "ClapTrap " << m_name << " has no hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (m_hitPoints < 10)
    {
        std::cout << "ClapTrap " << m_name << " is repaired by " << amount << " points!" << std::endl;
        m_hitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << m_name << " has full hit points!" << std::endl;
}

void ClapTrap::showStats()
{
    std::cout << "~~~ ClapTrap Stats ~~~\n" << m_name << " has:\n" << "- Hit Points : " << m_hitPoints << "\n" << "- Energy Points : " << m_energyPoints << "\n" << "- Attack Damage : " << m_attackDamage << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}