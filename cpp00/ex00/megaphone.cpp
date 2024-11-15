/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:22:11 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/14 14:56:41 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i,  j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (i < ac)
        {
            j = 0;
            while (av[i][j] != '\0')
            {
                av[i][j] = std::toupper(av[i][j]);
                j++;
            }
            std::cout << av[i];
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}
