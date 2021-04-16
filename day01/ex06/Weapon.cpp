#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon(){}

std::string Weapon::getType() const
{
    return this->_type;
}

std::string Weapon::setType(std::string type)
{
    return this->_type = type;
}

