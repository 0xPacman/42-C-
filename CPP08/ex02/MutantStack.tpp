/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   MutantStack.tpp                                   :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/02/01 17:57:31 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/02/01 17:57:31 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef MUNANTSTACK_TPP
# define MUNANTSTACK_TPP

#include "MutantStack.h"

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack const &src);
        MutantStack &operator=(MutantStack const &src);
        ~MutantStack();
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src)
{
    *this = src;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &src)
{
    if (this != &src)
        std::stack<T>::operator=(src);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}


#endif