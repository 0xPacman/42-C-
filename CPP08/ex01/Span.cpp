/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Span.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/02/01 14:51:14 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/02/01 14:51:14 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "Span.h"

Span::Span() : m_size(0)
{
}

Span::Span(unsigned int n) : m_size(n)
{
}

Span::Span(const Span &src)
{
    *this = src;
}

Span &Span::operator=(const Span &src)
{
    if (this != &src)
    {
        m_v = src.m_v;
        m_size = src.m_size;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (m_v.size() == m_size)
        throw FullException();
    m_v.push_back(n);
}
/* They will respectively find out the shortest span or the longest span (or distance, if
you prefer) between all the numbers stored, and return it. If there are no numbers stored,
or only one, no span can be found. Thus, throw an exception */
int Span::shortestSpan()
{
    if (m_v.size() <= 1)
        throw NoSpanException();
    std::vector<int> sorted = m_v;
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (unsigned int i = 2; i < sorted.size(); i++)
    {
        if (sorted[i] - sorted[i - 1] < min)
            min = sorted[i] - sorted[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (m_v.size() <= 1)
        throw NoSpanException();
    std::vector<int> sorted = m_v;
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - 1] - sorted[0];
}

int Span::getSize() const
{
    return m_size;
}

void Span::print()
{
    for (unsigned int i = 0; i < m_v.size(); i++)
        std::cout << m_v[i] << " ";
    std::cout << std::endl;
}

const char *Span::FullException::what() const throw()
{
    return "Span is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "Span is empty or has only one";
}
void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (m_v.size() + (end - begin) > m_size)
        throw FullException();
    m_v.insert(m_v.end(), begin, end);
}