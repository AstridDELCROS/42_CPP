# include <string>
# include <iostream>
# include "Pony.hpp"

void onTheHeap(void)
{
    Pony *jumper = new Pony("Jolly Jumper");
    jumper->saysHello();
    delete jumper;
}

void onTheStack(void)
{
    Pony penny = Pony("Penny");
    penny.saysHello();
    penny.setBehavior("bad");
    penny.talk();
}

int main()
{
    onTheHeap();
    onTheStack();
    return (0);
}