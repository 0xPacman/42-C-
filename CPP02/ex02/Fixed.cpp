/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Fixed.cpp                                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/17 02:48:54 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/17 02:48:54 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Fixed.h"

Fixed::Fixed()
{
    m_fixedPointValue = 0;
//    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    m_fixedPointValue = n << m_fractionalBits;
//    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
{
    m_fixedPointValue = roundf(n * (1 << m_fractionalBits));
//    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    // std::cout << "Assignation operator called" << std::endl;
    m_fixedPointValue = f.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return m_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    m_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)m_fixedPointValue / (1 << m_fractionalBits);
}

int Fixed::toInt(void) const
{
    return m_fixedPointValue >> m_fractionalBits;
}

bool Fixed::operator>(const Fixed &f) const
{
    return m_fixedPointValue > f.getRawBits();
}

bool Fixed::operator<(const Fixed &f) const
{
    return m_fixedPointValue < f.getRawBits();
}

bool Fixed::operator>=(const Fixed &f) const
{
    return m_fixedPointValue >= f.getRawBits();
}

bool Fixed::operator<=(const Fixed &f) const
{
    return m_fixedPointValue <= f.getRawBits();
}

bool Fixed::operator==(const Fixed &f) const
{
    return m_fixedPointValue == f.getRawBits();
}

bool Fixed::operator!=(const Fixed &f) const
{
    return m_fixedPointValue != f.getRawBits();
}

Fixed Fixed::operator+(const Fixed &f) const
{
    return Fixed(toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f) const
{
    return Fixed(toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
    return Fixed(toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
    return Fixed(toFloat() / f.toFloat());
}

Fixed &Fixed::operator++()
{
    m_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    m_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

//bonus
void Fixed::operator+=(const Fixed &f)
{
    m_fixedPointValue += f.m_fixedPointValue;
}

void Fixed::operator-=(const Fixed &f)
{
    m_fixedPointValue -= f.m_fixedPointValue;
}

void Fixed::operator*=(const Fixed &f)
{
    m_fixedPointValue *= f.m_fixedPointValue;
}

void Fixed::operator/=(const Fixed &f)
{
    m_fixedPointValue /= f.m_fixedPointValue;
}


std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}

