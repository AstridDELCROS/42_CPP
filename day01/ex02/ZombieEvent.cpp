#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
    this->_type = type;
}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie *ZombieEvent::newZombie( std::string name )
{
    return new Zombie(name, this->_type);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string	names[3] = {"LukeSky", "Johnnie", "Texas-Ranger"};
    Zombie		*new_zombie;

	srand (time(NULL));
	new_zombie = new Zombie(names[rand() % 3], this->_type);
	new_zombie->announce();
    return new_zombie;
}