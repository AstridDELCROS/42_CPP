#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default CL4P-TP created" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "CL4P-TP: " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrapSrc) {
	*this = clapTrapSrc;
	std::cout << "Copy of " << this->_name << " created" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &clapTrapSrc) {
	this->_name = clapTrapSrc._name;
	this->_hitPoints = clapTrapSrc._hitPoints;
	this->_maxHitPoints = clapTrapSrc._maxHitPoints;
	this->_energyPoints = clapTrapSrc._energyPoints;
	this->_maxEnergyPoints = clapTrapSrc._maxEnergyPoints;
	this->_level = clapTrapSrc._level;
	this->_meleeAttackDamage = clapTrapSrc._meleeAttackDamage;
	this->_rangedAttackDamage = clapTrapSrc._rangedAttackDamage;
	this->_armorDamageReduction = clapTrapSrc._armorDamageReduction;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP " << this->_name << " destroyed" << std::endl;
}

void		ClapTrap::rangedAttack(std::string const &target) {
	std::cout << "CL4P-TP " << this->_name << " performed a range attack to " << target << " causing " \
	<< this->_rangedAttackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target) {
	std::cout << "CL4P-TP " << this->_name << " performed a melee attack to " << target << " causing " \
	<< this->_meleeAttackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (amount < (unsigned)this->_armorDamageReduction) {
		amount = 0;
	}
	else
		amount -= this->_armorDamageReduction;
	if ((unsigned int)this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	std::cout << "CL4P-TP " << this->_name << " has lost " << amount << " points" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
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
	std::cout << "CL4P-TP " << this->_name << " gets " << amount << " more points" << std::endl;
}