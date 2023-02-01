/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   Brain.h                                           :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:29:38 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:29:38 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.h"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const & copy);
        ~Brain();
        Brain & operator=(Brain const & obj);
        
        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
};

#endif