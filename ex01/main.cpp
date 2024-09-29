/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:44:35 by aabidar           #+#    #+#             */
/*   Updated: 2024/09/29 22:22:18 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

void display_menu()
{
    int opt;

    std::cout << "Adding a new Contact to your PhoneBook!" << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "1). ADD: Add a Contact to Your PhoneBook." << std::endl;
    std::cout << "2). SEARCH: search a Contact from Your PhoneBook." << std::endl;
    std::cout << "3). EXIT: Exit & Lose Your PhoneBook." << std::endl;
    std::cout << "=======================================" << std::endl;

    opt = -1;
    
    while (opt == -1)
    {
        std::cout << "\t>> Your Choice: ";
        std::cin >> opt;

        if (opt == 1)
            std::cout << "ADD" << std::endl;
        else if (opt == 2)
            std::cout << "SEARCH" << std::endl;
        else if (opt == 3)
            std::cout << "EXIT" << std::endl;
        else
        {
            std::cout << "Invalid Option!" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            opt = -1;
        }
    }
}

int main (void)
{
    Contact Anass;

    Anass.print();
    // display_menu();
//   std::cout << std::setw(10) << std::right << 77 << '|'; 
//   std::cout << std::setw(10) << std::right << 77 << '|';
    // std::cout << "AnassAnassdd" << std::endl;
    return (0);
}