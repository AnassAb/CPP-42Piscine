/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:20:49 by aabidar           #+#    #+#             */
/*   Updated: 2024/09/29 22:22:07 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
    private:
        /* data */
    public:
        
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        
        Contact();
        Contact(std::string fn, std::string ln, std::string nn, 
                                std::string pn, std::string ds);
        ~Contact();

        void print(void);
        void print_in_list(int index);
};
