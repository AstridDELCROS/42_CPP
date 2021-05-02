/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:30:33 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):_name(name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FR4G-TP: " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragTrapSrc) {
	*this = fragTrapSrc;
	std::cout << "Copy of " << this->_name << " created" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &fragTrapSrc) {
	this->_name = fragTrapSrc._name;
	this->_hitPoints = fragTrapSrc._hitPoints;
	this->_maxHitPoints = fragTrapSrc._maxHitPoints;
	this->_energyPoints = fragTrapSrc._energyPoints;
	this->_maxEnergyPoints = fragTrapSrc._maxEnergyPoints;
	this->_level = fragTrapSrc._level;
	this->_meleeAttackDamage = fragTrapSrc._meleeAttackDamage;
	this->_rangedAttackDamage = fragTrapSrc._rangedAttackDamage;
	this->_armorDamageReduction = fragTrapSrc._armorDamageReduction;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP destroyed" << std::endl;
}

void		FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->_name << " performed a range attack to " << target << " causing " \
	<< this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->_name << " performed a melee attack to " << target << " causing " \
	<< this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {
	if (amount < (unsigned)this->_armorDamageReduction) {
		amount = 0;
	}
	else
		amount -= this->_armorDamageReduction;
	if ((unsigned int)this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	std::cout << "FR4G-TP " << this->_name << " has lost " << amount << " points" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount) {
	if ((unsigned int)this->_hitPoints + amount > (unsigned int)this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
	}
	else
		this->_hitPoints += amount;
	if ((unsigned int)this->_energyPoints + amount > (unsigned int)this->_maxEnergyPoints) {
		this->_energyPoints = this->_maxEnergyPoints;
	}
	else
		this->_energyPoints += amount;
	std::cout << "FR4G-TP " << this->_name << " gets " << amount << " more points" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::string meleeRandomAttacks[4] = {
		"Disarm",
		"Gunslinger Combo",
		"Pull Down",
		"Stealth"
	};
	if (this->_energyPoints >= 25) {
		this->_energyPoints -= 25;
		std::cout << "Well done! " << meleeRandomAttacks[std::rand() % 4] << " costs " \
		<< this->_meleeAttackDamage << " points to " << target << std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->_name << " needs " << 25 - this->_energyPoints \
		<< " more energy points" << std::endl;
}
