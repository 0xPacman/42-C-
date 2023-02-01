/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/30 15:12:52 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/30 15:12:52 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "iter.h"

void add(int &i)
{
    i += 1;
}

void rot13(char &c)
{
    if (c >= 'a' && c <= 'z')
        c = (c - 'a' + 13) % 26 + 'a';
    else if (c >= 'A' && c <= 'Z')
        c = (c - 'A' + 13) % 26 + 'A';
}

class Test
{
    public:
        Test() : m_x(1337) 
        {
        }
        Test(int n) : m_x(n) 
        {
        }
        ~Test() 
        {
        }
        int getX() const 
        { 
            return m_x;
        }
    private:
        int m_x;
};

std::ostream &operator<<(std::ostream &out, const Test &t)
{
    out << "x is " << t.getX();
    return out;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);
    std::cout << "-------------" << std::endl;

    iter(arr, 5, add);
    iter(arr, 5, print);
    std::cout << "-------------" << std::endl;

    char str[] = "this is nice!";
    iter(str, 12, rot13);
    std::cout << str << std::endl;
    std::cout << "-------------" << std::endl;
    Test arr2[3];
    iter(arr2, 3, print);

    return 0;
}