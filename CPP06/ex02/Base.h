/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Base.h                                            :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/30 11:58:37 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/30 11:58:37 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef BASE_H
# define BASE_H

# include <iostream>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
    public:
        ~A();
};

class B : public Base
{
    public:
        ~B();
};

class C : public Base
{
    public:
        ~C();
};

#endif