/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:23 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/15 10:45:51 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int prompt(void)
{
    std::string command;

    std::cout << "Enter command (ADD [A], SEARCH [S], EXIT [E]): " << std::endl;
    std::getline(std::cin, command);
    if (command == "ADD" || command == "A")
        return (1);
    if (command == "SEARCH" || command == "S")
        return (2);
    if (command == "EXIT" || command == "E")
        return (3);
    std::cout << "Invalid Command!" << std::endl;
    return (-1);
}

int main(void)
{
    int operation;

    operation = -1;
    while(operation == -1)
        operation = prompt();
    
    return (0);
}