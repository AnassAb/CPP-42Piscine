/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:08:49 by aabidar           #+#    #+#             */
/*   Updated: 2024/12/01 18:30:46 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        ~FragTrap( void );
        FragTrap( std::string pname );
        FragTrap( std::string p_name, unsigned int p_hp, unsigned int p_ep, unsigned int p_ad);
        FragTrap( const FragTrap& other );

        FragTrap&   operator=(const FragTrap& other);
        void        attack(const std::string& target);
        void        highFivesGuy( void );
};

#endif
