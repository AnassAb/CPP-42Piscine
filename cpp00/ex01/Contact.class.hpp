/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:54 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/15 10:56:28 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact 
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        ~Contact();

        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_darkest_secret();

        void    set_first_name(std::string value);
        void    set_last_name(std::string value);
        void    set_nick_name(std::string value);
        void    set_phone_number(std::string value);
        void    set_darkest_secret(std::string value);

        void    display_insearch(void);
        void    display_details(void);
};