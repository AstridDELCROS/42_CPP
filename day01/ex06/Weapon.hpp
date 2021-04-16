#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon {

    public:
    Weapon(std::string type);
    ~Weapon();
    std::string getType() const;
    std::string setType(std::string type);

    private:
    std::string _type;
};

#endif