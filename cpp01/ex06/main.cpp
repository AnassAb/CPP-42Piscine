/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 07:15:41 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/24 08:19:18 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    Harl H;

    if (ac != 2)
    {
        std::cerr << "harlFilter: Invalid number of arguments!" << std::endl;
        std::cout << "./harlFilter logLevel" << std::endl;
        return (1);
    }
    H.complain(std::string(av[1]));
    return (0);
}
