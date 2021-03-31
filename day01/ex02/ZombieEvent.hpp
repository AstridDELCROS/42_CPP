#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"
# include <string>
# include <iostream>

class ZombieEvent
{
    public:
    ZombieEvent(std::string type);
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
    Zombie *randomChump();

    private:
    std::string _type;
};

#endif