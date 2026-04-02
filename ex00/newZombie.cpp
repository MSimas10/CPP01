/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimek <msimek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 17:54:29 by msimek            #+#    #+#             */
/*   Updated: 2026/04/02 22:51:48 by msimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//allocation on HEAP by new, we have to call delete
Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}
