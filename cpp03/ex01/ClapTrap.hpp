/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:39:01 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/01 01:37:31 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <string>

class ClapTrap
{
    protected:
        std::string     name;
        unsigned int    hit_points; 
        unsigned int    energy_points;
        unsigned int    attack_damage;
    public:
        ClapTrap( void );
        ClapTrap( unsigned int p_hp, unsigned int p_ep, unsigned int p_ad );
        ClapTrap( std::string pname );
        ClapTrap( std::string pname, unsigned int p_hp, unsigned int p_ep, unsigned int p_ad );
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
