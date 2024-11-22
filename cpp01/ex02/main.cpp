/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabidar <aabidar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:14:45 by aabidar           #+#    #+#             */
/*   Updated: 2024/11/21 21:32:05 by aabidar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <string>
#include  <iostream>

int     main( void )
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "String Memory Address: " << &string << std::endl; 
    std::cout << "Memory Address held by stringPTR: " << stringPTR << std::endl; 
    std::cout << "Memory Address held by stringREF: " << &stringREF << std::endl; 
    std::cout << std::endl ;    
    std::cout << "String Value: " << string << std::endl; 
    std::cout << "Value Pointed To by stringPTR: " << *stringPTR << std::endl; 
    std::cout << "Value Pointed To by stringREF: " << stringREF << std::endl; 
    
    return (0);
}
