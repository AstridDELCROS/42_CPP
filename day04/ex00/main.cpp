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

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>
#include <cstdlib>

void schoolTests() {
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
}

void homemadeTests() {
    Sorcerer    *merlin = new Sorcerer("Merlin", "the Wizard");
    std::cout << *merlin;
    std::cout << "A thief pretends to be Merlin.\n";
    Sorcerer    *thief(merlin);
    Victim      traveller("traveller");
    thief->polymorph(traveller);
    Victim      traveller2("traveller2");
    traveller2 = traveller;
    std::cout << traveller2;
    traveller2.getPolymorphed();
    delete thief;
}

int main() {
    std::cout << "\033[0;31mSchool Tests\033[0m" << std::endl;
    schoolTests();
    std::cout << "\033[0;31mHome-made Tests\033[0m" << std::endl;
    homemadeTests();
    return 0;
}