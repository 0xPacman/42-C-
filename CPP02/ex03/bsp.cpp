/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   bsp.cpp                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/17 02:48:50 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/17 02:48:50 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Fixed.h"
#include "Point.h"

//barycentric coordinate system
//shoelace formula
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed xa = a.getX();
    Fixed ya = a.getY();
    Fixed xb = b.getX();
    Fixed yb = b.getY();
    Fixed xc = c.getX();
    Fixed yc = c.getY();
    Fixed x = point.getX();
    Fixed y = point.getY();

    Fixed d1 = (x - xc) * (yb - yc) - (y - yc) * (xb - xc);
    Fixed d2 = (x - xa) * (yc - ya) - (y - ya) * (xc - xa);
    Fixed d3 = (x - xb) * (ya - yb) - (y - yb) * (xa - xb);

    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;
    if (d1 > 0 && d2 > 0 && d3 > 0)
        return true;
    if (d1 < 0 && d2 < 0 && d3 < 0)
        return true;
    return false;
}
