/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:17:30 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/23 02:42:09 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string data, std::string s1, std::string s2)
{
    (void) data;
    (void) s1;
    (void) s2;
    return ("hamid");
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "sed: Invalid Number of Arguments" << std::endl;
        std::cerr << "help: ./sed filename string1 string2" << std::endl;
        return (1);
    }
    
    std::ifstream input(av[1]);
    if (!input)
    {
        std::cerr << "sed: couldn't open file: " << av[1] << std::endl;
        return (1);
    }
    std::string data, new_data;
    while (input >> data)
        new_data += data + ' ';

    std::cout << new_data << std::endl;

    std::string outfile = std::string(av[1]) + ".replace";
    std::ofstream output(outfile.c_str());
    if (!output)
    {
        std::cerr << "sed: couldn't open file: " << outfile << std::endl;
        return (1);
    }
    output << replace(new_data, std::string(av[2]), std::string(av[3]));

    return (0);
}
