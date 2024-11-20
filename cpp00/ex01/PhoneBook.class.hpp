/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:25:00 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/20 21:38:49 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <string>
#include "Contact.class.hpp"
class PhoneBook
{
    private:
        int number_of_contacts;
    
    public:
        Contact contacts[8];
        
        PhoneBook(){number_of_contacts = 0;};
        ~PhoneBook(){};

        void    add(void);
        void    search(void);
        void    exit(void);
};

#endif