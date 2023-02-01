/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Point.cpp                                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/17 02:49:05 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/17 02:49:05 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Point.h"

Point::Point()
{
    m_x = 0;
    m_y = 0;
}

Point::Point(const float x, const float y)
{
    m_x = x;
    m_y = y;
}

Point::Point(const Point &p)
{
    *this = p;
}

Point::~Point()
{
}

Point &Point::operator=(const Point &p)
{
    m_x = p.getX();
    m_y = p.getY();
    return *this;
}

float Point::getX(void) const
{
    return m_x;
}

float Point::getY(void) const
{
    return m_y;
}
