#include "Zombie.hpp"

//creating the line of objects(zombies) in the heap, everyone of them will get an identity 

Zombie* zombieHorde( int N, std::string name )
{
    int i =0;
    Zombie* horde= new Zombie[N];
    while(i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}