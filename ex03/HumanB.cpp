#include "HumanB.hpp"
//NUll is for memory safety, not random place
HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack() const
{
    if(!_weapon)
        std::cout << _name << "has no weapon to attack with" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}