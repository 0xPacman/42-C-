/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Fixed.h                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/15 00:54:41 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/15 00:54:41 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int m_fixedPointValue;
        static const int m_fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed &operator=(const Fixed &f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif