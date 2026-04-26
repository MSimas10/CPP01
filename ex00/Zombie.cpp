/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimek <msimek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:32:57 by msimek            #+#    #+#             */
/*   Updated: 2026/04/02 21:27:17 by msimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor with inicializater list
Zombie::Zombie(std::string name) : _name(name)
{}
Zombie::~Zombie()
{
    std::cout << _name << ": has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}