/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Point.h                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/17 02:49:08 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/17 02:49:08 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef POINT_H
# define POINT_H

class Point
{
    private:
        float m_x;
        float m_y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &p);
        ~Point();
        Point &operator=(const Point &p);
        float getX(void) const;
        float getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif