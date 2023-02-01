/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   IMateriaSource.h                                  :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:50:02 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:50:02 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.h"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materials[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & copy);
        ~MateriaSource();
        MateriaSource & operator=(MateriaSource const & obj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif