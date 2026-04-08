#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon
{
    private:
    //private atribute type,which is a string
    std::string type;

    public:
    Weapon(std::string);
    ~Weapon();

};


#endif