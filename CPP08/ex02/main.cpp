/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/02/01 17:57:23 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/02/01 17:57:23 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "MutantStack.h"
#include "MutantStack.tpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "it: " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    /*
    +---+
    | 3 |  <--- Top of the stack
    +---+
    | 2 |
    +---+
    | 1 |
    +---+
    */
    std::cout << "----------------" << std::endl;
    std::list <int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << "back: " << l.back() << std::endl;
    l.pop_back();
    std::cout << "size: " << l.size() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);

    l.push_back(0);
    std::list<int>::iterator itl = l.begin();
    std::list<int>::iterator itel = l.end();
    ++itl;
    --itl;
    while (itl != itel)
    {
        std::cout << "itl: " << *itl << std::endl;
        ++itl;
    }
    std::list<int> ml(l);
    /*
    +---+    +---+    +---+
    | 1 | -> | 2 | -> | 3 |  <--- Head of the list
    +---+    +---+    +---+
    */
}