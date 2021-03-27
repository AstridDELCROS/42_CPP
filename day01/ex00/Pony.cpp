# include <string>
# include <iostream>
# include "Pony.hpp"

Pony::Pony()
{
    this->behavior = "kind";
    this->name = "Penny";
    std::cout << "A " << this->behavior << " pony called " << this->name << " has been created." << std::endl;
}

Pony::~Pony()
{
    std::cout << "A " << this->behavior << " pony called " << this->name << " has been killed." << std::endl;
}

std::string Pony::getName()
{
    return this->name;
}

std::string Pony::getBehavior()
{
    return this->behavior;
}

void Pony::setBehavior(std::string behavior)
{
    this->behavior = behavior;
}

void Pony::saysHello()
{
    std::cout << "hello, I'm " << this->name << "and I'm " << this->behavior << std::endl;
}

void Pony::talk()
{
    std::cout << "Don't you dare mess with " << this->behavior << " " << this->name << " !" << std::endl;
}

