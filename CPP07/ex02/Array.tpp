/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Array.tpp                                         :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/30 17:53:53 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/30 17:53:53 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.h"

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &src);
        ~Array();
        Array &operator=(const Array &src);
        T &operator[](unsigned int i);
        unsigned int size() const;
        class OutOfLimitsException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class ErrorException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    private:
        unsigned int m_size;
        T *m_arr;
};

template <typename T>
Array<T>::Array()
{
    m_size = 0;
    m_arr = new T[m_size]();
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    if (static_cast<int>(n) < 0)
        throw Array::ErrorException();
    m_size = n;
    m_arr = new T[m_size]();
}

template <typename T>
Array<T>::Array(const Array<T> &src)
{
    m_size = src.m_size;
    m_arr = new T[m_size]();
    for (unsigned int i = 0; i < m_size; i++)
        m_arr[i] = src.m_arr[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] m_arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src)
{
    if (this != &src)
    {
        delete[] m_arr;
        m_size = src.m_size;
        m_arr = new T[m_size]();
        for (unsigned int i = 0; i < m_size; i++)
            m_arr[i] = src.m_arr[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= m_size)
        throw Array::OutOfLimitsException();
    return m_arr[i];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return m_size;
}

template <typename T>
const char *Array<T>::OutOfLimitsException::what() const throw()
{
    return "Out of limits";
}

template <typename T>
const char *Array<T>::ErrorException::what() const throw()
{
    return "Error";
}

#endif