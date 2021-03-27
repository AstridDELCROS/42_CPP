# include <string>
# include <iostream>
# include "Pony.hpp"
# include "Pony.cpp"

void onTheHeap(void)
{
    Pony *penny = new Pony();
    penny->saysHello();
    delete penny;
}

void onTheStack(void)
{
    Pony penny = Pony();
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