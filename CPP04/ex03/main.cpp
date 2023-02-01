/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   main.cpp                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/23 08:49:59 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/23 08:49:59 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

#include "IMateriaSource.h"
#include "AMateria.h"
#include "ICharacter.h"
#include "Cure.h"
#include "Ice.h"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    std::cout << "----------------------------------------" << std::endl;
    
    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Ice());
    src2->learnMateria(new Cure());
    ICharacter* player1 = new Character("pacman");
    AMateria* tmp2;
    tmp2 = src2->createMateria("ice");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("ice");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    player1->equip(tmp2);
    tmp2 = src2->createMateria("cure");
    player1->equip(tmp2);
    ICharacter* player2 = new Character("carl");
    // player2->equip(src2->createMateria("cure"));

    player1->use(0, *player2);
    player1->use(1, *player2);
    player1->use(2, *player2);
    player1->use(3, *player2);
    player1->use(4, *player2);
    player1->unequip(0);
    player1->unequip(1);

    return 0;
}