/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/08 21:22:59 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/08 21:22:59 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "phonebook.h"

int main()
{
  Phonebook phonebook;
  std::string input;

  std::cout << GREEN << "Commands:" << NC << std::endl;
  std::cout << RED << "ADD" << NC << " - add contact" << std::endl;
  std::cout << RED << "SEARCH" << NC << " - search contact" << std::endl;
  std::cout << RED << "EXIT" << NC << " - exit program" << std::endl;

  while (1337)
  {
    std::cout << "Enter command: ";
    std::cin >> input;
    if (input == "ADD")
      phonebook.Add();
    else if (input == "SEARCH")
      phonebook.Search();
    else if (input == "EXIT")
      phonebook.Exit();
    else
    {
      std::cout << RED << "Invalid command" << NC << std::endl;
      break;
    }
  }
}
