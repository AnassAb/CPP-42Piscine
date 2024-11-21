/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:27:47 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/21 03:17:00 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

void    announce_hoard(Zombie *hoard, int N)
{
    int i = -1;

    if (!hoard)
        return ;
    while (++i < N)
        hoard[i].announce();
    delete [] hoard;
}

int     main( void )
{
    Zombie *ayoubHoard = zombieHorde(-1, "Ayoub");
    Zombie *anassHoard = zombieHorde(3, "Anass");
    Zombie *radouaneHoard = zombieHorde(5, "Radouane");
    Zombie *amineHoard = zombieHorde(8, "Amine");
    Zombie *elMokhtarHoard = zombieHorde(0, "El Mokhtar");

    announce_hoard(ayoubHoard, -1);
    announce_hoard(anassHoard, 3);
    announce_hoard(radouaneHoard, 5);
    announce_hoard(amineHoard, 8);
    announce_hoard(elMokhtarHoard, 0);
    
    return (0);
}
