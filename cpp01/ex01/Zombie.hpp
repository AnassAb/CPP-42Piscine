/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:51:02 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/21 02:40:45 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
};

#endif
