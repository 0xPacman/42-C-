/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   phonebook.cpp                                     :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/08 21:22:46 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/08 21:22:46 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "phonebook.h"

// Contact methods
void Contact::getFirstName(std::string first)
{
	this->firstName = first;
}
void Contact::getLastName(std::string last)
{
	this->lastName = last;
}
void Contact::getNickname(std::string nickname)
{
	this->nickname = nickname;
}
void Contact::getPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void Contact::getSecret(std::string secret)
{
	this->secret = secret;
}

std::string Contact::showFirstName()
{
	return this->firstName;
}
std::string Contact::showLastName()
{
	return this->lastName;
}
std::string Contact::showNickname()
{
	return this->nickname;
}
std::string Contact::showPhoneNumber()
{
	return this->phoneNumber;
}
std::string Contact::showSecret()
{
	return this->secret;
}

// destructors
Phonebook::~Phonebook()
{
};

Contact::~Contact()
{
};

Contact::Contact()
{
	std::cout  << "called!" << std::endl;
};

// Phonebook methods
void Phonebook::Add()
{		
	if (this->index <= max)
	{
		std::string first;
		std::string last;
		std::string nickname;
		std::string phoneNumber;
		std::string secret;

		std::cout << "First name: ";
		std::cin >> first;
		if (first.empty())
		{
			std::cout << RED << "First name cannot be empty" << NC << std::endl;
			exit(0);
		}
		std::cout << "Last name: ";
		std::cin >> last;
		if (last.empty())
		{
			std::cout << RED << "Last name cannot be empty" << NC << std::endl;
			exit(0);
		}
		std::cout << "Nickname: ";
		std::cin >> nickname;
		if (nickname.empty())
		{
			std::cout << RED << "Nickname cannot be empty" << NC << std::endl;
			exit(0);
		}
		std::cout << "Phone number: ";
		std::cin >> phoneNumber;
		if (phoneNumber.empty())
		{
			std::cout << RED << "Phone number cannot be empty" << NC << std::endl;
			exit(0);
		}
		std::cout << "Secret: ";
		std::cin >> secret;
		if (secret.empty())
		{
			std::cout << RED << "Darkest secret cannot be empty" << NC << std::endl;
			exit(0);
		}
		this->contacts[this->index].getFirstName(first);
		this->contacts[this->index].getLastName(last);
		this->contacts[this->index].getNickname(nickname);
		this->contacts[this->index].getPhoneNumber(phoneNumber);
		this->contacts[this->index].getSecret(secret);
		this->index++;
		if (this->index == max)
		{
			this->index = 0;
			this->last = max;
		}
	}
}

void Phonebook::printContact(std::string list)
{
	if (list.length() > 10)
		std::cout << "|" << std::right << std::setw(10) << list.substr(0, 10).replace(9,10, ".");
	else
		std::cout << "|" << std::right << std::setw(10) << list;
}

void Phonebook::Search()
{
	int index = 0;
	std::string columns[4] = {"index", "first name", "last name", "nickname"};
	
	for (int i = 0; i < 4; i++)
		std::cout << "|" << std::right << std::setw(10) << columns[i];
	std::cout << std::endl;

	for (int i = 0; (this->last == max) ? i < 8 : i < this->index; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << i;
		printContact(this->contacts[i].showFirstName());
		printContact(this->contacts[i].showLastName());
		printContact(this->contacts[i].showNickname());
		std::cout << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> index;
	if (index < 0 || index > 7 || (this->last != max && index >= this->index))
	{
		std::cout << RED << "Invalid index" << NC << std::endl;
		return;
	}
	else
	{
		std::cout << "First name: " << this->contacts[index].showFirstName() << std::endl;
		std::cout << "Last name: " << this->contacts[index].showLastName() << std::endl;
		std::cout << "Nickname: " << this->contacts[index].showNickname() << std::endl;
		std::cout << "Phone number: " << this->contacts[index].showPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[index].showSecret() << std::endl;
	}
}

void Phonebook::Exit()
{
	std::cout << YELLOW << "Goodbye!" << NC << std::endl;
	exit(1);
}