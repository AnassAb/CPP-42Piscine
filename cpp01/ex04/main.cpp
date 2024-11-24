/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:17:30 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/24 03:36:12 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void    replace(std::string &data, std::string s1, std::string s2)
{
    std::size_t s1_pos;

    s1_pos = data.find(s1, 0);
    while (s1_pos != std::string::npos)
    {
        data.erase(s1_pos, s1.length());
        data.insert(s1_pos, s2);
        s1_pos += s2.length();
        s1_pos = data.find(s1, s1_pos);
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "sed: Invalid Number of Arguments" << std::endl;
        std::cerr << "help: ./sed filename string1 string2" << std::endl;
        return (1);
    }
    
    std::ifstream input(av[1], std::ios::in);
    if (!input)
    {
        std::cerr << "sed: couldn't open file: " << av[1] << std::endl;
        return (1);
    }

    //TODO: understand ostringstreams and rdbuf
    std::ostringstream buffer;
    buffer << input.rdbuf(); 
    
    std::string new_data = buffer.str();
    
    std::string outfile = std::string(av[1]) + ".replace";
    std::ofstream output(outfile.c_str());
    if (!output)
    {
        std::cerr << "sed: couldn't open file: " << outfile << std::endl;
        return (1);
    }
    replace(new_data, std::string(av[2]), std::string(av[3]));
    output << new_data;

    return (0);
}
