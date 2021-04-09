#include "Human.hpp"

Human::Human(){}

Human::~Human(){}

Brain &Human::getBrain() const
{
    return (Brain&)(this->_brain);
}

std::string Human::identify() const
{
    return this->_brain.identify();
}