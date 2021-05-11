/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name):_name(name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &victimSrc) {
	*this = victimSrc;
	std::cout << "Copy of " << this->_name << ", " << ", created" << std::endl;
}

Victim&	Victim::operator=(Victim const &victimSrc) {
	this->_name = victimSrc._name;
	return *this;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;

}

std::string     Victim::getName() const {
    return this->_name;
}

std::ostream&	operator<<(std::ostream &output, Victim const &victimSrc) {
    output << "I am " << victimSrc.getName() << ", and I like otters!" << std::endl;
	return output;
}

void            Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}