/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/31 18:37:05 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/31 18:37:05 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "easyfind.h"
#include "easyfind.tpp"

int main()
{
    std::vector<int> v;
    v.assign(6, 1);
    try
    {
        std::vector<int>::iterator itest = easyfind(v, 6);
        std::cout << *itest << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::array<int, 4> a = {1, 2, 3, 4};
    try
    {
        std::array<int, 4>::iterator itest = easyfind(a, 2);
        std::cout << *itest << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    try
    {
        std::list<int>::iterator itest = easyfind(l, 3);
        std::cout << *itest << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::forward_list<int> fl;
    fl.push_front(1);
    fl.push_front(2);
    fl.push_front(3);
    fl.push_front(4);
    try
    {
        std::forward_list<int>::iterator itest = easyfind(fl, 4);
        std::cout << *itest << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    try
    {
        std::deque<int>::iterator itest = easyfind(d, 5);
        std::cout << *itest << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    std::set<int> st; // set is an associative container 
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    try
    {
        std::set<int>::iterator itest = easyfind(st, 4);
        std::cout << *itest << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}