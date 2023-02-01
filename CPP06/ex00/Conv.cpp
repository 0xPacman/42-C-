/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Conv.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/29 13:06:53 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/29 13:06:53 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Conv.h"

conv::conv() : m_str("")
{
}

conv::conv(std::string str) : m_str(str)
{
}

conv::conv(conv const & src) : m_str(src.getStr())
{
}

conv::~conv()
{
}

conv &conv::operator=(conv const & obj)
{
    if (this != &obj)
    {
        (void)obj;
    }
    return (*this);
}

std::string	conv::getStr() const
{
    return (m_str);
}


int scientificNotationToInt(const std::string &s) {
    std::regex intRegex("^[+-]?[0-9]+(\\.[0-9]+)?([eE][+-]?[0-9]+)?$");
    if (!std::regex_match(s, intRegex)) {
        return 0;
    }
    int value = 0;
    int exp = 0;
    int expSign = 1;
    bool afterExp = false;
    unsigned long i = 0;
    while (i < s.length()) {
        char c = s[i];
        if (c == 'e' || c == 'E') {
            afterExp = true;
        } else if (c == '+' && afterExp) {
            expSign = 1;
        } else if (c == '-' && afterExp) {
            expSign = -1;
        } else if (isdigit(c)) {
            if (afterExp) {
                exp = exp * 10 + (c - '0');
            } else {
                value = value * 10 + (c - '0');
            }
        }
        i++;
    }
    return value * pow(10, expSign * exp);
}

void conv::convert()
{
    if (m_str.length() == 1 && !isdigit(m_str[0]))
    {
        if(isprint(m_str[0]))
        {
            std::cout << "char: " << m_str[0] << std::endl;
            std::cout << "int: " << static_cast<int>(m_str[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(m_str[0]) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(m_str[0]) << ".0" << std::endl;
        }
        else
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << static_cast<int>(m_str[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(m_str[0]) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(m_str[0]) << ".0" << std::endl;
        }
    }
    else if (m_str == "nanf" || m_str == "nan")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (m_str == "inf" || m_str == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (m_str == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (m_str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else
    {
        std::regex intRegex("^[+-]?[0-9]+$");
        if (std::regex_match(m_str, intRegex))
        {
            int i = std::stoi(m_str);
            if (i >= 0 && i <= 127)
            {
                std::cout << "char: " << static_cast<char>(i) << std::endl;
                std::cout << "int: " << i << std::endl;
                std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
                std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
            }
            else
            {
                std::cout << "char: Non displayable" << std::endl;
                std::cout << "int: " << i << std::endl;
                std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
                std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
            }
        }
        else
        {
            std::regex floatRegex("^[+-]?[0-9]+[.]?[0-9]*[f]?$");
            if (std::regex_match(m_str, floatRegex))
            {
                float f = std::stof(m_str);
                if (f >= 0 && f <= 127)
                {
                    std::cout << "char: " << static_cast<char>(f) << std::endl;
                    std::cout << "int: " << static_cast<int>(f) << std::endl;
                    std::cout << "float: " << f << "f" << std::endl;
                    std::cout << "double: " << static_cast<double>(f) << std::endl;
                }
                else
                {
                    std::cout << "char: Non displayable" << std::endl;
                    std::cout << "int: " << static_cast<int>(f) << std::endl;
                    std::cout << "float: " << f << "f" << std::endl;
                    std::cout << "double: " << static_cast<double>(f) << std::endl;
                }
            }
            else
            {
                std::regex doubleRegex("^[+-]?[0-9]+[.]?[0-9]*$");
                if (std::regex_match(m_str, doubleRegex))
                {
                    double d = std::stod(m_str);
                    if (d >= 0 && d <= 127)
                    {
                        std::cout << "char: " << static_cast<char>(d) << std::endl;
                        std::cout << "int: " << static_cast<int>(d) << std::endl;
                        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
                        std::cout << "double: " << d << std::endl;
                    }
                    else
                    {
                        std::cout << "char: Non displayable" << std::endl;
                        std::cout << "int: " << static_cast<int>(d) << std::endl;
                        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
                        std::cout << "double: " << d << std::endl;
                    }
                }
                else if (scientificNotationToInt(m_str))
                {
                    int i = scientificNotationToInt(m_str);
                    std::cout << "char: Non displayable" << std::endl;
                    std::cout << "int: " << i << std::endl;
                    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
                    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
                }
                else
                {
                    std::cout << "char: impossible" << std::endl;
                    std::cout << "int: impossible" << std::endl;
                    std::cout << "float: impossible" << std::endl;
                    std::cout << "double: impossible" << std::endl;
                }
            }
        }
    }
}
