#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
    public:
    Pony(std::string name);
    ~Pony();
    void saysHello(void);
    void talk(void);
    void setBehavior(std::string behavior);

    private:
    std::string _name;  
    std::string _behavior;  
};

#endif