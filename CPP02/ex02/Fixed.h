/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Fixed.h                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/17 02:48:56 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/17 02:48:56 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int m_fixedPointValue;
        static const int m_fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed &operator=(const Fixed &f);

        bool operator>(const Fixed &f) const;
        bool operator<(const Fixed &f) const;
        bool operator>=(const Fixed &f) const;
        bool operator<=(const Fixed &f) const;
        bool operator==(const Fixed &f) const;
        bool operator!=(const Fixed &f) const;

        Fixed operator+(const Fixed &f) const;
        Fixed operator-(const Fixed &f) const;
        Fixed operator*(const Fixed &f) const;
        Fixed operator/(const Fixed &f) const;

        //bonus
        void operator+=(const Fixed &f);
        void operator-=(const Fixed &f);
        void operator*=(const Fixed &f);
        void operator/=(const Fixed &f);

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif