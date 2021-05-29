/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):_name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sorcererSrc) {
	*this = sorcererSrc;
	std::cout << "Copy of " << this->_name << ", " << this->_title << ", created" << std::endl;
}

Sorcerer&		Sorcerer::operator=(Sorcerer const &sorcererSrc) {
	this->_name = sorcererSrc._name;
	this->_title = sorcererSrc._title;
	return *this;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;

}

std::string     Sorcerer::getName() const {
    return this->_name;
}

std::string     Sorcerer::getTitle() const {
    return this->_title;
}

std::ostream&	operator<<(std::ostream &output, Sorcerer const &sorcererSrc) {
    output << "I am " << sorcererSrc.getName() << ", " << sorcererSrc.getTitle() << ", and I like ponies!" << std::endl;
	return output;
}

void            Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
}