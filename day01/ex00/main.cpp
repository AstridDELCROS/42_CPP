# include <string>
# include <iostream>
# include "Pony.hpp"

void onTheHeap(void)
{
    Pony *penny = new Pony("Jolly Jumper");
    penny->saysHello();
    delete penny;
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