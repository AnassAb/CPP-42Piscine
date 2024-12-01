/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:38:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/01 21:27:49 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
    FragTrap Anass("Anass");
    FragTrap Ayoub("Ayoub");
    FragTrap ElAmine("Chipo");
    FragTrap ElMokhtar("Erabareta");
    FragTrap Radouane("RedOne");
    std::cout << "--------------------------------------" << std::endl;
    FragTrap Abidar(Anass);
    FragTrap Echchariy(Ayoub);
    FragTrap Echoubby(ElAmine);
    FragTrap Ouhrich(ElMokhtar);
    FragTrap Tamouss(Radouane);
    std::cout << "--------------------------------------" << std::endl;
    Abidar.highFivesGuy();
    Ayoub.attack("Radouane");
    Radouane.beRepaired(10);
    Ouhrich.takeDamage(10);
    Tamouss.attack("CHIPO");
    std::cout << "--------------------------------------" << std::endl;
}

