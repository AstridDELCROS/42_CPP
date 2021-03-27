#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
    public:
    Pony();
    ~Pony();
    void saysHello(void);
    void talk(void);
    std::string getName();
    std::string getBehavior();
    void setBehavior(std::string behavior);

    private:
    std::string name;  
    std::string behavior;  
};

#endif