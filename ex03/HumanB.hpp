#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

//unarmed,pointer, I can give weapon later by fnc setWeapon
class HumanB
{
    private:
    std::string _name;
    Weapon* _weapon;

    public:
    HumanB (const std::string &name);
    ~HumanB();

    void setWeapon(Weapon &_weapon);
    void attack() const;

};

#endif