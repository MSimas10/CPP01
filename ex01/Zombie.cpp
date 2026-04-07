#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "Unnamed";
}


// -> take the name from brackets and save it to the variable, which belongs to the specific zombii
void setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}