/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src) {
    *this = src;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &rhs) {
    (void)rhs;
    std::cout << "* teleports from space *" << std::endl;
    return *this;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const {
    return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}