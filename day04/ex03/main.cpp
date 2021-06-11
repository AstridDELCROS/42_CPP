/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

void    schoolTests() {
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
}

void    homemadeTests() {
    std::cout << "\033[0;32;1mPlaying with ice\033[0m" << std::endl;
    Ice*	ice = new Ice();
    Cure*	cure = new Cure();
    Ice ice2 = Ice(*ice);
    Character bobby("bobby");
    Character bob("bob");
    std::cout << "\033[0;32mnothing will happen\033[0m\n";
    bobby.use(0, bob);
    bobby.equip(ice);
    std::cout << "\033[0;32muse ice\033[0m\n";
    bobby.use(0, bob);
    bobby.equip(cure);
    std::cout << "\033[0;32muse cure\033[0m\n";
    bobby.use(1, bob);
    std::cout << "\033[0;32mice should get 10xp from use\033[0m\n";
    std::cout << "ice gets " << ice->getXP() << " XP.\n";
    bobby.use(0, bob);
    std::cout << "\033[0;32mice2 should get 0xp as nobody is equipped with it\033[0m\n";
    std::cout << "ice2 gets " << ice2.getXP() << " XP.\n";
    ice2 = *ice;
    std::cout << "\033[0;32mice2 should get 20xp from second use of ice\033[0m\n";
    std::cout << "ice2 gets " << ice2.getXP() << " XP.\n";
    std::cout << std::endl;
    std::cout << "\033[0;32;1mAdding Materias to Source\033[0m" << std::endl;
    MateriaSource source;
    MateriaSource source2;
    source.learnMateria(new Ice());
    source.learnMateria(new Ice());
    source.learnMateria(new Ice());
    source.learnMateria(new Cure());
    source.learnMateria(new Cure());
    AMateria *armor[5];
    for (size_t i = 0; i < 2; i++) {
        armor[i] = source.createMateria("ice");
        std::cout << armor[i]->getType() << " materia type is created" << std::endl;
        armor[i+2] = source.createMateria("cure");
        std::cout << armor[i+2]->getType() << " materia type is created" << std::endl;
        bob.equip(armor[i]);
        bobby.equip(armor[i+2]);
        bob.use(0, bobby);
        bobby.use(1, bob);
    }
    std::cout << "\033[0;32mlet's take bobby his cure materia\033[0m\n";
    bobby.unequip(1);
    std::cout << "\033[0;32mnothing happens\033[0m";
    bobby.use(1, bob);
}

int main() {
    std::cout << "\033[0;31mSchool Tests\033[0m" << std::endl;
    schoolTests();
    std::cout << "\033[0;31mHome-made Tests\033[0m" << std::endl;
    homemadeTests();
    return 0;
}