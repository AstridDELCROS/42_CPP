#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(int n)
{
	srand (time(NULL));
    std::string	names[] = {"Alix", "Basile", "Camille", "Dimitri"};

	this->hordeSize = n;
    this->horde = new Zombie[this->hordeSize];
	for (int i = 0; i < this->hordeSize; i++)
		this->horde[i].init(names[rand() % 4], "walker");
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->horde;
    std::cout << "Zombie killed on the heap." << std::endl;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->hordeSize; i++)
    {
        this->horde[i].announce();
    }
}