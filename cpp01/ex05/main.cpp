/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 03:40:49 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/24 04:19:42 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl H;

    H.complain("DEBUG");
    H.complain("INFO");
    H.complain("WARNING");
    H.complain("ERROR");
    return (0);
}
