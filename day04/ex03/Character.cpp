/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:35:18 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character& src)
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character&			Character::operator=(const Character& rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	this->_name = rhs.getName();
	for(int i = 0; i < 4; i++)
		if(rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	return *this;
}

const std::string&	Character::getName() const
{
	return this->_name;
}

void				Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return;
		}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}