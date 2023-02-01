/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/30 17:53:58 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/30 17:53:58 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Array.h"
#include "Array.tpp"

// int main()
// {   
//     //Array<int> a;
//     //Array<int> b(5);
    
//     int *a = new int(12); 

//     try
//     {
//         std::cout << a[2] << std::endl;
//         //std::cout << b[1] << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }

#define MAX_VAL 750
int main(int, char**)
{
    try
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
            //std::cout << numbers[i] << std::endl; 
        }
        delete [] mirror;
        }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}