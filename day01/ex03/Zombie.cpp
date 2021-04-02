#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}

Zombie::~Zombie()
{
    std::cout << "Zombie killed on the stack." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << "(" << this->_type << ")" << "Braiiiinnnss" << std::endl;
}

void Zombie::init(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
}