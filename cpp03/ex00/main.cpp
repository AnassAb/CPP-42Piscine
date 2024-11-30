/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:38:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/30 20:43:24 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap Anass("Anass");
    ClapTrap Ayoub("Ayoub");
    ClapTrap ElAmine("Chipo");
    ClapTrap ElMokhtar("Erabareta");
    ClapTrap Radouane("RedOne");

    ClapTrap Abidar(Anass);
    ClapTrap Echchariy(Ayoub);
    ClapTrap Echoubby(ElAmine);
    ClapTrap Ouhrich(ElMokhtar);
    ClapTrap Tamouss(Radouane);

    ClapTrap Friend1, Friend2, Friend3, Enemy1, Enemy2;

    Friend1 = Anass;    
    Friend2 = Ayoub;    
    Friend3 = Ouhrich;
    Enemy1 = Tamouss;    
    Enemy2 = Echoubby;

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);
    
    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Friend2.beRepaired(10);
    Friend2.beRepaired(10);
    Friend2.beRepaired(10);
    Friend2.beRepaired(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.beRepaired(10);
    Enemy1.beRepaired(10);
    Enemy1.beRepaired(10);
    Enemy1.beRepaired(10);
    Enemy1.beRepaired(10);


    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);

    Enemy1.attack(Friend2.getName());
    Friend2.takeDamage(10);
    Friend1.attack(Enemy1.getName());
    Enemy1.takeDamage(10);
}

