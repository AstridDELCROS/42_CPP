/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:30:33 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):_name(name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "SC4V-TP: " << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrapSrc) {
	*this = scavTrapSrc;
	std::cout << "Copy of " << this->_name << " created" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &scavTrapSrc) {
	this->_name = scavTrapSrc._name;
	this->_hitPoints = scavTrapSrc._hitPoints;
	this->_maxHitPoints = scavTrapSrc._maxHitPoints;
	this->_energyPoints = scavTrapSrc._energyPoints;
	this->_maxEnergyPoints = scavTrapSrc._maxEnergyPoints;
	this->_level = scavTrapSrc._level;
	this->_meleeAttackDamage = scavTrapSrc._meleeAttackDamage;
	this->_rangedAttackDamage = scavTrapSrc._rangedAttackDamage;
	this->_armorDamageReduction = scavTrapSrc._armorDamageReduction;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP " << this->_name << " destroyed" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->_name << " performed a range attack to " << target << " causing " \
	<< this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->_name << " performed a melee attack to " << target << " causing " \
	<< this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount) {
	if (amount < (unsigned)this->_armorDamageReduction) {
		amount = 0;
	}
	else
		amount -= this->_armorDamageReduction;
	if ((unsigned int)this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	std::cout << "SC4V-TP " << this->_name << " has lost " << amount << " points" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
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
	std::cout << "SC4V-TP " << this->_name << " gets " << amount << " more points" << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const &target) {
	std::string challenge[3] = {
		"solve this enigma",
		"keep eyes open while sneezing",
		"play 5 times to russian roulette"
	};
	if (this->_energyPoints >= 25) {
		this->_energyPoints -= 25;
		std::cout << "Hello " << target << ", " << challenge[rand() % 3] << " to come in." << std::endl;
	}
	else
		std::cout << "SC4V-TP " << this->_name << " needs " << 25 - this->_energyPoints \
		<< " more energy points" << std::endl;
}
