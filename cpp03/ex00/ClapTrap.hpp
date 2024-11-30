/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:39:01 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/30 21:08:22 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>

class ClapTrap
{
    private:
        std::string     name;
        unsigned int    hit_points; 
        unsigned int    energy_points;
        unsigned int    attack_damage;
    public:
        ClapTrap( void );
        ClapTrap( std::string pname );
        ClapTrap( const ClapTrap &other );
        ~ClapTrap();
 
        ClapTrap&       operator=( const ClapTrap &other );

        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        int             checkIfAble( std::string opr );
        std::string     getName( void ) const;

};

#endif
