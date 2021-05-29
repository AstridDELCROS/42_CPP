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

Character::Character(std::string const &name): _name(name), _ap(40), _weapon(NULL){}

Character::Character(Character const &src) {
    *this = src;
}

Character::~Character(){}

Character& Character::operator=(const Character &rhs) {
    this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_weapon = rhs._weapon;
    return *this;
}

std::string Character::getName() const {
    return this->_name;
}
int         Character::getAP() const {
    return this->_ap;
}

AWeapon     *Character::getWeapon() const {
    return this->_weapon;
}

void Character::recoverAP() {
    if (this->_ap + 10 <= 40) {
        this->_ap += 10;
    }
}

void Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
    if (!enemy || !this->_weapon || this->_ap < this->_weapon->getAPCost())
		return ;
    std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    this->_ap -= this->_weapon->getAPCost();
    enemy->takeDamage(this->_weapon->getDamage());
    if (enemy->getHP() <= 0)
	{
		delete enemy;
		enemy = NULL;
	}
}

std::ostream    &operator<<(std::ostream &output, Character const &rhs) {
    output << rhs.getName() << " has " << rhs.getAP() << " action points and ";
    if (rhs.getWeapon()) {
        output << "wields a " << rhs.getWeapon()->getName();
    }
    else {
        output << " is unarmed.";
    }
    output << std::endl;
    return output;
}