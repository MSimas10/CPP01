#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

//implemented zombie class
class Zombie
{
    private:
    //there is a private string attribute 'name'
    std::string _name;

    public:
    Zombie();
     //constructor with parameters to inicialize object and set up his value, in our case for just one Zombie
    Zombie(std::string name);
    ~Zombie();

    void setName(std::string name);
    
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif