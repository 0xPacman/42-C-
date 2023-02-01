/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   easyfind.tpp                                      :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/31 18:37:08 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/31 18:37:08 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "easyfind.h"

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return it;
}

#endif