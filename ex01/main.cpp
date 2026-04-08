#include "Zombie.hpp"
//declaration of function, for compilator, that it exists...definition in zombieHorde.cpp
Zombie* zombieHorde( int N, std::string name );

int main()
{
    int N = 9;
    Zombie* horde = zombieHorde(N, "HordeZombie");

    for (int i =0; i < N; i++)
        horde[i].announce();

    delete[] horde;
}