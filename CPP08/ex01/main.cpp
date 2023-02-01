/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/02/01 14:51:08 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/02/01 14:51:08 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Span.h"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        // std::cout << "===" << std::endl;
        // sp.print();
        // std::cout << "===" << std::endl;
        std::cout << "----------------" << std::endl;
        Span sp2 = Span(20000);
        // fill the vector with 10000 random numbers
        srand(time(NULL));
        for (int i = 0; i < 20000; i++)
            sp2.addNumber(rand());
        
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        std::cout << "----------------" << std::endl;

        std::vector<int> v;
        for (int i = 0; i < 8; i++)
            v.push_back(rand());
        Span sp4 = Span(10);
        sp4.addRange(v.begin(), v.end());
        // for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        //     std::cout << *it << " ";
        // std::cout << std::endl;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}