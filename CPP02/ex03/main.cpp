/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/17 02:48:59 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/17 02:48:59 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Fixed.h"
#include "Point.h"

int main()
{
    std::cout << "inside the traingle: " << std::endl;
    std::cout << bsp( Point( 1, 1 ), Point( 1, 4 ), Point( 4, 1 ), Point( 1.5f , 1.5f ) ) << std::endl;
    std::cout << "outside the traingle: " << std::endl;
    std::cout << bsp( Point( -1, -1 ), Point( -1, -4 ), Point( -4, -1 ), Point( 1.5f , 1.5f ) ) << std::endl;
    std::cout << "test: " << std::endl;
    std::cout << bsp( Point( 1, -1 ), Point( 5, -1 ), Point( 1, -7 ), Point( 4 , -1.5f ) ) << std::endl;
    std::cout << "test Point strictly inside the triangle: " << std::endl;
    std::cout << bsp( Point( 0, 0 ), Point( 4, 0 ), Point( 0, 3 ), Point( 1 , 1 ) ) << std::endl;
}