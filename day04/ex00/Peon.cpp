/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string _name) : Victim(_name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &peonSrc) : Victim(peonSrc._name) {
	*this = peonSrc;
	std::cout << "Copy of " << this->_name << ", " << ", created" << std::endl;
}

Peon&	Peon::operator=(Peon const &peonSrc) {
	this->_name = peonSrc._name;
	return *this;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;

}

void            Peon::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}