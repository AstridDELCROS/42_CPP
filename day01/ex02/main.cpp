#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie *zombieOnTheHeap;
    Zombie zombieOnTheStack("Jean-Michel", "Victime");
    ZombieEvent event("runner");
    printf("----------------------------------------\n");
    zombieOnTheHeap = event.newZombie("random");
    zombieOnTheHeap->announce();
    delete zombieOnTheHeap;
    printf("----------------------------------------\n");
    event.setZombieType("walker");
    event.randomChump();
    delete zombieOnTheHeap;
    printf("----------------------------------------\n");
    zombieOnTheStack.announce();
    return (0);
}