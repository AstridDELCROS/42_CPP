/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_memorizedMateria[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	for (int i = 0; i < 4; i++)
		this->_memorizedMateria[i] = NULL;
	for (int i = 0; i < 4; i++)
		if (this->_memorizedMateria[i])
			delete this->_memorizedMateria[i];
	*this = copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_memorizedMateria[i])
			delete this->_memorizedMateria[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs) {
	for (int i = 0; i < 4; i++) {
		if (this->_memorizedMateria[i]) {
			delete this->_memorizedMateria[i];
			this->_memorizedMateria[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		if (rhs._memorizedMateria[i])
			this->_memorizedMateria[i] = rhs._memorizedMateria[i]->clone();
	return *this;
}

void			MateriaSource::learnMateria(AMateria* materia) {
	for(int i = 0; i < 4; i++)
		if (!this->_memorizedMateria[i]) {
			this->_memorizedMateria[i] = materia;
			return;
		}
}

AMateria*		MateriaSource::createMateria(const std::string& type) {
	for(int i = 0; i < 4; i++)
		if (this->_memorizedMateria[i]->getType() == type)
			return this->_memorizedMateria[i]->clone();
	return NULL;
}
