#include "HumanA.hpp"
//inicializacion list in class fro reference
HumanA::HumanA(const std::string &name, Weapon& weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{
}
//a function attack()
void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}