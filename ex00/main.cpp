/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimek <msimek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 22:53:27 by msimek            #+#    #+#             */
/*   Updated: 2026/04/02 23:15:18 by msimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//prototypes for compiler, they are promised to the compiler
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    //testing on stack, dies with semicolon
    std::cout << "Zombie class test" << std::endl;
    Zombie zombie_1("Zombie_1");
    zombie_1.announce();

    //testing on heap, -> using, only when is pointer 
    std::cout << "newZombie" << std::endl;
    Zombie* zombie_2 = newZombie("Zombie_2");
    zombie_2->announce();

    std::cout << "\nrandomChamp" << std::endl;
    randomChump("Zombie_3");

    delete zombie_2;
    return 0;
}