/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   phonebook.h                                       :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/09 14:03:29 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/09 14:03:29 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <cstring>
#include <iomanip>

// colors
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define NC "\033[0m"

//classes
class Contact
{
	public:
		Contact();
		~Contact();
		void getFirstName(std::string firstName);
		void getLastName(std::string lastName);
		void getNickname(std::string nickname);
		void getPhoneNumber(std::string phoneNumber);
		void getSecret(std::string secret);
		
		std::string showFirstName();
		std::string showLastName();
		std::string showNickname();
		std::string showPhoneNumber();
		std::string showSecret();

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string secret;
		
};

class Phonebook
{
	public:
		Phonebook(): index(0) {};
		~Phonebook();
		static const int max = 8;
		void Add();
		void Search();
		void Exit();
	private:
		Contact contacts[max];
		void printContact(std::string list);
		int index;
		int last;
};

#endif