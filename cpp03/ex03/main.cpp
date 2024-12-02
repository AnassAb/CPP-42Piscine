/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:38:48 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/02 20:15:04 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
    DiamondTrap Anass("Anass");
    
    Anass.attack("Abidar");
    Anass.takeDamage(10);
    Anass.beRepaired(10);
    Anass.whoAmI();
    Anass.highFivesGuy();
    Anass.guardGate();
}

