#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

std::string Brain::identify() const
{
    std::stringstream streamToStr;
    streamToStr << this;
    return streamToStr.str(); 
}