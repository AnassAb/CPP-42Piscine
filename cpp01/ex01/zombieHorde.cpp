/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:27:30 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/21 03:12:56 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <stdlib.h>

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cerr << "zombie: invalid argument." << std::endl;
        return (NULL);
    }

    Zombie *horde = new(std::nothrow) Zombie[N];
    
    if (horde == NULL)
    {
        std::cerr << "zombie: new failed to allocate memory." << std::endl;
        return (NULL);
    }
    
    int i = -1;
    while (++i < N)
        horde[i] = Zombie(name);
    
    return (horde);
}
