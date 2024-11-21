/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:50:54 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/21 03:11:37 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <stdlib.h>

Zombie* newZombie( std::string name )
{
    Zombie *new_zombie = new (std::nothrow) Zombie(name);

    if (new_zombie == NULL)
    {
        std::cerr << "zombie: new failed to allocate memory." << std::endl;
        exit(1);
    }
    return (new_zombie);
}
