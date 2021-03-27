# include <string>
# include <iostream>
# include "Pony.hpp"

Pony::Pony(std::string name)
{
    this->_behavior = "kind";
    _name = name;
    std::cout << "A " << this->_behavior << " pony called " << this->_name << " has been created." << std::endl;
}

Pony::~Pony()
{
    std::cout << "A " << this->_behavior << " pony called " << this->_name << " has been killed." << std::endl;
}

void Pony::setBehavior(std::string behavior)
{
    this->_behavior = behavior;
}

void Pony::saysHello()
{
    std::cout << "hello, I'm alive!" << std::endl;
}

void Pony::talk()
{
    std::cout << "Don't you dare mess with " << this->_behavior << " " << this->_name << "." << std::endl;
}

