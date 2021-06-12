/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad():_unitCount(0), _units(NULL){}

Squad::Squad(Squad const &src) {
    *this = src;
}

Squad &Squad::operator=(const Squad &rhs){
    if (this->_units) {
        for (int i = 0; i < this->_unitCount; i++)
            delete this->_units[i];
        delete [] this->_units;
    }
    this->_units = new ISpaceMarine *[rhs.getCount()];
    for (int i = 0; i < rhs.getCount(); i++) {
        this->_units[i] = rhs.getUnit(i)->clone();
    }
    this->_unitCount = rhs.getCount();
    return *this;
}

Squad::~Squad() {
    for (int i = 0; i < _unitCount; i++)
        delete this->_units[i];
    delete [] this->_units;
    
}

int Squad::getCount() const {
    return this->_unitCount;
}

ISpaceMarine   *Squad::getUnit(int i) const{
    return this->_units[i];
}

int Squad::push(ISpaceMarine *spaceMarine) {
    ISpaceMarine	**current;
	current = new ISpaceMarine *[this->_unitCount + 1];
	for (int i = 0; i < this->_unitCount; i++)
		current[i] = this->_units[i];
	current[this->_unitCount] = spaceMarine;
	this->_unitCount++;
	delete [] this->_units;
	this->_units = current;
	return this->_unitCount;
}


