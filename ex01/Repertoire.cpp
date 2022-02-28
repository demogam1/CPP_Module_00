/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertoire.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:34 by misaev            #+#    #+#             */
/*   Updated: 2022/02/26 17:42:39 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_name(std::string str)
{
    int i = 0;
    
    while ((char)str[i])
    {
        if (isalpha((char)str[i]) != 0)
            i++;
        else
            return 0;
    }
    return 1;
}

int main()
{
    PhoneBook reper;
    
    std::string buf;
    while(1)
    {        
        std::cout << "Enter your command : ";
        std::cin >> buf;

        if (buf == "ADD") 
            reper.add_new_contact();
        if (buf == "SEARCH")
    }        
    return 0;
}