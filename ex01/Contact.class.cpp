/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:20:46 by aabidar           #+#    #+#             */
/*   Updated: 2024/09/29 22:21:48 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iomanip>

void get_input_from_user(std::string title, std::string *field)
{
    int i = 0;

    while (i == 0)
    {
        std::cout << "\t> "<< title <<": ";
        getline(std::cin, *field);
        i = field->length();
        if (i == 0)
            std::cout << title << " is required!" << std::endl;
    }
}

Contact::Contact()
{
    std::cout << "Creating a new Contact!" << std::endl;
    std::cout << "=======================================" << std::endl;
    get_input_from_user("First Name", &this->first_name);
    get_input_from_user("Last Name", &this->last_name);
    get_input_from_user("Nickname", &this->nickname);
    get_input_from_user("Phone Number", &this->phone_number);
    get_input_from_user("Darkest Secret", &this->darkest_secret);
    std::cout << "=======================================" << std::endl;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds) : 
first_name(fn), last_name(ln), nickname(nn), phone_number(pn), darkest_secret(ds)
{
    std::cout << "**Constructor Called and Contact Set!**" << std::endl;
}

Contact::~Contact()
{
    std::cout << "**Deconstructor Called**" << std::endl;
}

std::string length_check(std::string field)
{
    unsigned long len;

    len = field.length();
    if (len > 10)
    {
        field = field.substr(0, 10);
        field[9] = '.';
    }
    return field;
}

void Contact::print_in_list(int index)
{
    std::cout << std::endl;
    std::cout << std::setw(10) << std::right << index << '|'; 
    std::cout << std::setw(10) << std::right << length_check(this->first_name) << '|'; 
    std::cout << std::setw(10) << std::right << length_check(this->last_name) << '|'; 
    std::cout << std::setw(10) << std::right << length_check(this->nickname) << std::endl; 
    std::cout << std::endl;
}

void Contact::print()
{
    std::cout << std::endl;
    std::cout << "First Name: " << this->first_name << std::endl; 
    std::cout << "Last Name: " << this->last_name << std::endl; 
    std::cout << "Nickname: " << this->nickname << std::endl; 
    std::cout << "Phone Number: " << this->phone_number<< std::endl; 
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl; 
    std::cout << std::endl;
}