/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:25:00 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/19 22:47:29 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
