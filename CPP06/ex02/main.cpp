/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/30 11:58:35 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/30 11:58:35 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Base.h"

Base * generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void identify(Base * p)
{
    std::cout << "--- identify(Base * p) ---" << std::endl;
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base & p)
{
    std::cout << "--- identify(Base & p) ---" << std::endl;
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "A Catch" << std::endl;
        (void)e;
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "B Catch" << std::endl;
        (void)e;
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "C Catch" << std::endl;
        (void)e;
    }
}

int main()
{
    Base *b = generate();
    identify(b);
    identify(*b);
    delete b;
}