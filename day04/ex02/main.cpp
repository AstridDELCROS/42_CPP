/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void    schoolTests() {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
    }
    delete vlc;
}

void    homemadeTests() {
    ISpaceMarine* bobby = new TacticalMarine;
    ISpaceMarine* bob = new TacticalMarine;
    bobby = bob;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* jimmy(jim);
    ISquad* smallSquad = new Squad;
    std::cout << "Init squad\n";
    smallSquad->getCount();
    smallSquad->push(bobby);
    smallSquad->push(jimmy);
    smallSquad->getCount();
    std::cout << "Call first marine\n";
    smallSquad->getUnit(0);
    bobby->battleCry();
    std::cout << "Call second marine\n";
    smallSquad->getUnit(1);
    jimmy->battleCry();
    std::cout << "Fight\n";
    bobby->rangedAttack();
    jimmy->meleeAttack();
    std::cout << "Disappear\n";
    delete smallSquad;
}

int main() {
    std::cout << "\033[0;31mSchool Tests\033[0m" << std::endl;
    schoolTests();
    std::cout << "\033[0;31mHome-made Tests\033[0m" << std::endl;
    homemadeTests();
    return 0;
}