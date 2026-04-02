/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimek <msimek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:32:41 by msimek            #+#    #+#             */
/*   Updated: 2026/04/02 23:11:21 by msimek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdlib>

class Zombie
{
    private:
    
    std::string _name;

    public:
    
        Zombie(std::string name);
        ~Zombie();

        void announce(void);
};

#endif