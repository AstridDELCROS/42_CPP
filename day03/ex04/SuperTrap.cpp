/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:30:33 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_maxHitPoints = this->FragTrap::_maxHitPoints;
	this->_energyPoints = this->NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = this->NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = this->NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = this->FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = this->FragTrap::_armorDamageReduction;
	std::cout << "SUPER-TP: " << this->_name << " created" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &superTrapSrc) {
	*this = superTrapSrc;
	std::cout << "Copy of " << this->_name << " created" << std::endl;
}

SuperTrap&	SuperTrap::operator=(SuperTrap const &superTrapSrc) {
	this->_name = superTrapSrc._name;
	this->_hitPoints = superTrapSrc._hitPoints;
	this->_maxHitPoints = superTrapSrc._maxHitPoints;
	this->_energyPoints = superTrapSrc._energyPoints;
	this->_maxEnergyPoints = superTrapSrc._maxEnergyPoints;
	this->_level = superTrapSrc._level;
	this->_meleeAttackDamage = superTrapSrc._meleeAttackDamage;
	this->_rangedAttackDamage = superTrapSrc._rangedAttackDamage;
	this->_armorDamageReduction = superTrapSrc._armorDamageReduction;
	return *this;
}

SuperTrap::~SuperTrap() {
	std::cout << "SUPER-TP " << this->_name << " destroyed" << std::endl;
}
