/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){}

Cure::Cure(const Cure& copy):AMateria(copy) {
	*this = copy;
}

Cure::~Cure(){}

Cure&	Cure::operator=(const Cure &rhs) {
	this->_xp = rhs.getXP();
	return *this;
}

AMateria*	Cure::clone() const {
	return new Cure(*this);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() <<"'s wounds *" << std::endl;
	this->_xp += 10;
}
