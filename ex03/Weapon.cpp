#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

//function setType belongs to the Weapon class
void Weapon::setType(std::string newType)
{
    this->_type= newType;
}

const std::string& Weapon::getType() const
{
    return _type;
}