/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:54 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/20 01:50:50 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact 
{
    public:
        int         index;
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

        Contact(){};
        ~Contact(){};

        void    display_insearch(void);
        void    display_details(void);
        int     getContactInfo(int id);
};
