/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:38:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/01 02:11:52 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
    ScavTrap Anass("Anass");
    ScavTrap Ayoub("Ayoub");
    ScavTrap ElAmine("Chipo");
    ScavTrap ElMokhtar("Erabareta");
    ScavTrap Radouane("RedOne");
    std::cout << "--------------------------------------" << std::endl;
    ScavTrap Abidar(Anass);
    ScavTrap Echchariy(Ayoub);
    ScavTrap Echoubby(ElAmine);
    ScavTrap Ouhrich(ElMokhtar);
    ScavTrap Tamouss(Radouane);
    std::cout << "--------------------------------------" << std::endl;
    // ClapTrap Friend1, Friend2, Friend3, Enemy1, Enemy2;
    std::cout << "--------------------------------------" << std::endl;
}

