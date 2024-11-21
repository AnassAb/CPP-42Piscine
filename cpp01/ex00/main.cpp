/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:50:50 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/21 02:25:00 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int     main( void )
{
    randomChump("Anass");
    randomChump("Ayoub");
    randomChump("Radouane");
    randomChump("Amine");
    randomChump("El Mokhtar");

    Zombie *Anass = newZombie("Anass");
    Zombie *Ayoub = newZombie("Ayoub");
    Zombie *Radouane = newZombie("Radouane");
    Zombie *Amine = newZombie("Amine");
    Zombie *ElMokhtar = newZombie("El Mokhtar");

    Anass->announce();
    Ayoub->announce();
    Radouane->announce();
    Amine->announce();
    ElMokhtar->announce();

    delete(Anass);
    delete(Ayoub);
    delete(Radouane);
    delete(Amine);
    delete(ElMokhtar);

    return (0);
}



