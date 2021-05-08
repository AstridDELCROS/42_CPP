/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <adelcros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 10:59:27 by astriddel         #+#    #+#             */
/*   Updated: 2021/04/30 01:30:33 by astriddel        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NINJ4-TP: " << this->_name << " created" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjaTrapSrc) {
	*this = ninjaTrapSrc;
	std::cout << "Copy of " << this->_name << " created" << std::endl;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const &ninjaTrapSrc) {
	this->_name = ninjaTrapSrc._name;
	this->_hitPoints = ninjaTrapSrc._hitPoints;
	this->_maxHitPoints = ninjaTrapSrc._maxHitPoints;
	this->_energyPoints = ninjaTrapSrc._energyPoints;
	this->_maxEnergyPoints = ninjaTrapSrc._maxEnergyPoints;
	this->_level = ninjaTrapSrc._level;
	this->_meleeAttackDamage = ninjaTrapSrc._meleeAttackDamage;
	this->_rangedAttackDamage = ninjaTrapSrc._rangedAttackDamage;
	this->_armorDamageReduction = ninjaTrapSrc._armorDamageReduction;
	return *this;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NINJ4-TP " << this->_name << " destroyed" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
	std::string shoeAttack[3] = {
		"FlipFlop",
		"Kickers",
		"Doc Martins"
	};
	if (this->_energyPoints >= 25) {
		this->_energyPoints -= 25;
        clapTrap.takeDamage(this->_rangedAttackDamage);
		std::cout << "Well done! " << shoeAttack[std::rand() % 3] << " sent to a claptrap." << std::endl;
	}
	else
		std::cout << "NINJ4-TP " << this->_name << " needs " << 25 - this->_energyPoints \
		<< " more energy points" << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
	std::string shoeAttack[3] = {
		"FlipFlop",
		"Kickers",
		"Doc Martins"
	};
	if (this->_energyPoints >= 25) {
		this->_energyPoints -= 25;
        fragTrap.takeDamage(this->_rangedAttackDamage);
		std::cout << "Well done! " << shoeAttack[std::rand() % 3] << " sent to a fragtrap." << std::endl;
	}
	else
		std::cout << "NINJ4-TP " << this->_name << " needs " << 25 - this->_energyPoints \
		<< " more energy points" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
	std::string shoeAttack[3] = {
		"FlipFlop",
		"Kickers",
		"Doc Martins"
	};
	if (this->_energyPoints >= 25) {
		this->_energyPoints -= 25;
        scavTrap.takeDamage(this->_rangedAttackDamage);
		std::cout << "Well done! " << shoeAttack[std::rand() % 3] << " sent to a scavtrap." << std::endl;
	}
	else
		std::cout << "NINJ4-TP " << this->_name << " needs " << 25 - this->_energyPoints \
		<< " more energy points" << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
	std::string shoeAttack[3] = {
		"FlipFlop",
		"Kickers",
		"Doc Martins"
	};
	if (this->_energyPoints >= 25) {
		this->_energyPoints -= 25;
        ninjaTrap.takeDamage(this->_rangedAttackDamage);
		std::cout << "Well done! " << shoeAttack[std::rand() % 3] << " sent to another ninjatrap." << std::endl;
	}
	else
		std::cout << "NINJ4-TP " << this->_name << " needs " << 25 - this->_energyPoints \
		<< " more energy points" << std::endl;
}
