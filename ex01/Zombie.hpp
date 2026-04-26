#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

//implemented zombie class
class Zombie
{
    private:
    //there is a private string attribute 'name'
    std::string _name;

    public:
    //default constructor
    Zombie();
     //parametric constructor, only for one zombie
    Zombie(std::string name);
    ~Zombie();

    void setName(std::string name);
    
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif