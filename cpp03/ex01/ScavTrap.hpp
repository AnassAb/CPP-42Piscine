/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:08:49 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/02 20:31:43 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ~ScavTrap( void );
        ScavTrap( void );
        ScavTrap( std::string pname );
        ScavTrap( std::string p_name, unsigned int p_hp, unsigned int p_ep, unsigned int p_ad);
        ScavTrap( const ScavTrap& other );

        ScavTrap&   operator=(const ScavTrap& other);
        void        attack(const std::string& target);
        void        guardGate( void );
};

#endif
