/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:58 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/20 00:33:55 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.class.hpp"
# include <iostream>
# include <stdlib.h>

void    PhoneBook::add(void)
{
    int id = 0;
    
    if (number_of_contacts != 8)
        id = number_of_contacts;
    std::cout << std::endl;
    while (contacts[id].getContactInfo(id) == -1);
    std::cout << std::endl;
    if (number_of_contacts < 8)
        number_of_contacts++;
}

void    PhoneBook::search(void)
{
    int id, i = 0;

    std::cout << std::endl;
    while (i < number_of_contacts)
    {
        contacts[i].display_insearch();
        i++;
    }
    std::cout << std::endl;
    id = -1;
    while (id < 0 || id >= number_of_contacts)
    {
        std::cout << "Enter A Valid Contact's ID: ";
        std::cin >> id;
    }
    std::cout << std::endl;
    contacts[id].display_details();
    std::cout << std::endl;
}

void    PhoneBook::exit(void)
{
    std::cout << std::endl;
    std::cout << "Exiting..." << std::endl;
    std::exit(0);
}
