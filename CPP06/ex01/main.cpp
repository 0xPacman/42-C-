/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/30 11:23:35 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/30 11:23:35 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Struct.h"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data c;

    uintptr_t ptr;
    Data *strct;

    c.x = 42;
    c.y = "test";

    ptr = serialize(&c);
    std::cout << "ptr: " << ptr << std::endl;
    strct = deserialize(ptr);
    std::cout << "strct->y: " << strct->y << std::endl;

    std::cout << "-----------------------------------" << std::endl;
    Data d;
    uintptr_t ptr2;
    Data *strct2;

    d.x = 123;
    d.y = "test2";

    ptr2 = serialize(&d);
    strct2 = deserialize(ptr2);

    if (strct2 == &d)
    {
        std::cout << "The return value of deserialize() is equal to the original pointer" << std::endl;
    }
    else
    {
        std::cout << "The return value of deserialize() is NOT equal to the original pointer" << std::endl;
    }

    return 0;
}