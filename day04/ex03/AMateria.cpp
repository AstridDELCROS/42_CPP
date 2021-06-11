/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(const std::string& type):_xp(0), _type(type){}

AMateria::AMateria(const AMateria& src) {
	// *this = src;
	this->_type = src.getType();
	this->_xp = src.getXP();
}

AMateria&		AMateria::operator=(const AMateria& rhs) {
	this->_xp = rhs.getXP();
	return *this;
}

AMateria::~AMateria(){}

const std::string	&AMateria::getType() const {
	return this->_type;
}

unsigned int		AMateria::getXP() const {
	return this->_xp;
}

void			AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}
