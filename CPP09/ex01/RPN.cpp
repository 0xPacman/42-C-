/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   RPN.cpp                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/03/20 17:36:28 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/03/20 17:36:28 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "RPN.h"

RPN::RPN()
{
	return ;
}

RPN::RPN(std::string arg)
{
	if (!checkArg(arg))
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	std::cout << postfix(arg) << std::endl;
}

RPN::RPN(RPN const & src)
{
	*this = src;
}

RPN::RPN::~RPN()
{
}

RPN & RPN::operator=(RPN const & obj)
{
	if (this != &obj)
	{
		m_exp = obj.m_exp;
	}
	return *this;
}

void RPN::debug()
{
	std::cout << "-- Debug ---" << std::endl;
}

bool RPN::checkArg(std::string arg)
{
    std::string validChars = "0123456789+-*/ ";
    return arg.find_first_not_of(validChars) == std::string::npos;
}

int RPN::postfix(std::string arg)
{
	std::stringstream ss(arg);
	std::string token;
	while (std::getline(ss, token, ' '))
	{
		if (token == "+")
		{
			int a = m_exp.back();
			m_exp.pop_back();
			int b = m_exp.back();
			m_exp.pop_back();
			m_exp.push_back(a + b);
		}
		else if (token == "-")
		{
			int a = m_exp.back();
			m_exp.pop_back();
			int b = m_exp.back();
			m_exp.pop_back();
			m_exp.push_back(b - a);
		}
		else if (token == "*")
		{
			int a = m_exp.back();
			m_exp.pop_back();
			int b = m_exp.back();
			m_exp.pop_back();
			m_exp.push_back(b * a);
		}
		else if (token == "/")
		{
			int a = m_exp.back();
			if (a == 0)
			{
				std::cout << "Error" << std::endl;
				exit(1);
			}
			m_exp.pop_back();
			int b = m_exp.back();
			m_exp.pop_back();
			m_exp.push_back(b / a);
		}
		else
		{
			m_exp.push_back(std::atoi(token.c_str()));
		}
	}
	if (m_exp.size() != 1)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	return m_exp.back();
}