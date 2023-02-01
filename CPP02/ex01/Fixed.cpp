/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Fixed.cpp                                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/15 19:23:35 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/15 19:23:35 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Fixed.h"

Fixed::Fixed() : m_fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignation operator called" << std::endl;
    m_fixedPointValue = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    m_fixedPointValue = i << m_fractionalBits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    m_fixedPointValue = roundf(f * (1 << m_fractionalBits)); // f * 256
    
    //std::cout << "f in binary: " << std::bitset<32>(*(int *)&f) << std::endl;
    //std::cout << "f shifted: " << std::bitset<32>(*(int *)&f << m_fractionalBits) << std::endl;
    //std::cout << "f shifted ((1 << m_fractionalBits)): " << std::bitset<32>(*(int *)&f << 1 << m_fractionalBits)<< std::endl;
    
    //std::cout << "m_fixedPointValue in binary: " << std::bitset<32>(m_fixedPointValue) << std::endl;
    //std::cout << "m_fixedPointValue: " << m_fixedPointValue << std::endl;
    //std::cout << "m_fixedPointValue shifed: " << (m_fixedPointValue >> 8) << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return m_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    m_fixedPointValue = raw;
}

int Fixed::toInt(void) const
{
    return m_fixedPointValue >> m_fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)m_fixedPointValue / (1 << m_fractionalBits); // m_fixedPointValue / 256
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}