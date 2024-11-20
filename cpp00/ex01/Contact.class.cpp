/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:51 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/20 01:52:07 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.class.hpp"
# include <iostream>
# include <iomanip>

void    print_field(const std::string &field)
{
    std::string format_field = field; 
    if (format_field.length() > 10) 
    {
        format_field = format_field.substr(0, 10);
        format_field[9] = '.';
    }
    std::cout << std::setw(10);
    std::cout << format_field;
}

void    Contact::display_insearch(void)
{
    std::cout << std::setw(10);
    std::cout << index;
    std::cout << "|";
    print_field(first_name);
    std::cout << "|";
    print_field(last_name);
    std::cout << "|";
    print_field(nick_name);
    std::cout << std::endl;
}

void    Contact::display_details(void)
{
    std::cout << std::endl;
    std::cout << "Contact N° " << index << ":" << std::endl;
    std::cout << "\tFirst Name: " << first_name << std::endl;
    std::cout << "\tLast Name: " << last_name << std::endl;
    std::cout << "\tNickname: " << nick_name << std::endl;
    std::cout << "\tDarkest Secret: " << darkest_secret << std::endl;
    std::cout << "\tPhone Number: " << phone_number << std::endl;
    std::cout << std::endl;
}

int     is_empty(std::string str)
{
    size_t  i = 0;

    while (i < str.length())
    {
        if (!isspace(str[i]))
            return (0);
        i++;
    }
    std::cout << "No empty fields!" << std::endl;
    return (1);
}

int     is_valid_phone_number(std::string str)
{
    size_t  i = 0;

    if (!(str[i] == '+' || str[i] == '0'))
    {
        std::cout << "Invalid Phone Number!" << std::endl; 
        std::cout << "Enter a valid phone number [0655859277 or +212655859277]!" << std::endl;
        return (0);
    }
    i++;
    while (i < str.length())
    {
        if (!isdigit(str[i]))
        {
            std::cout << "Invalid Phone Number!" << std::endl; 
            std::cout << "Enter a valid phone number [0655859277 or +212655859277]!" << std::endl;
            return (0);
        }
        i++;
    }
    return (1);
}

int    Contact::getContactInfo(int id)
{
    index = id;
    std::cout << std::endl;
    std::cout << "Fill informations for Contact N° " << id << " :" << std::endl;
    std::cout << "First Name: " << std::endl;
    std::getline (std::cin >> std::ws,first_name);
    if (is_empty(first_name))
        return (-1);
    std::cout << "Last Name: " << std::endl;
    std::getline (std::cin >> std::ws,last_name);
    if (is_empty(last_name))
        return (-1);
    std::cout << "Nickname: " << std::endl;
    std::getline (std::cin >> std::ws, nick_name);
    if (is_empty(nick_name))
        return (-1);
    std::cout << "Darkest Secret: " << std::endl;
    std::getline (std::cin >> std::ws, darkest_secret);
    if (is_empty(darkest_secret))
        return (-1);
    std::cout << "Phone Number(+212655859277 or 0655859277): " << std::endl;
    std::getline (std::cin >> std::ws, phone_number);
    if (is_empty(phone_number) || !is_valid_phone_number(phone_number))
        return (-1);
    std::cout << std::endl;
    return (0);
}
