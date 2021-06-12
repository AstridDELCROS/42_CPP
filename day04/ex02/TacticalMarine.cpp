/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src) {
    *this = src;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &rhs) {
    (void)rhs;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    return *this;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const {
    return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}