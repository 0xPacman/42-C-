/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   FragTrap.cpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/20 15:35:38 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/20 15:35:38 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */


#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << GREEN << "FragTrap Default constructor called" << NC << std::endl;
    this->m_name = "Default";
    this->m_hitPoints = 100;
    this->m_energyPoints = 100;
    this->m_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN << "FragTrap Constructor called" << NC << std::endl;
    this->m_name = name;
    this->m_hitPoints = 100;
    this->m_energyPoints = 100;
    this->m_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << GREEN << "FragTrap Copy constructor called" << NC << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FragTrap Destructor called" << NC << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
    std::cout << GREEN << "FragTrap Assignation operator called" << NC << std::endl;
    if (this != &obj)
    {
        this->m_name = obj.m_name;
        this->m_hitPoints = obj.m_hitPoints;
        this->m_energyPoints = obj.m_energyPoints;
        this->m_attackDamage = obj.m_attackDamage;
    }
    return *this;
}

void FragTrap::attack(std::string const & target)
{
    if (this->m_energyPoints > 0)
    {
        std::cout << "FragTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of damage!" << std::endl;
        this->m_energyPoints -= 1;
    }
    else
        std::cout << "FragTrap " << this->m_name << " is out of energy!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->m_name << " sending *HighFives*!" << std::endl;
}