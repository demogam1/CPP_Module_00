/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertoire.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:34 by misaev            #+#    #+#             */
/*   Updated: 2022/03/02 14:58:05 by misaev           ###   ########.fr       */
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


int check_nbr(std::string str)
{
    int i = 0;
    
    while ((char)str[i])
    {
        if (isdigit((char)str[i]) != 0)
            i++;
        else if ((str[i] == '-' || str[i] == '+') && i == 0)
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
    std::string index;
    int index_int;
    while(1)
    {
        std::cout << "Enter your command : ";
        std::getline(std::cin, buf);
        std::cout << std::endl;
        if (buf == "ADD")
            reper.add_new_contact();
        else if (buf == "SEARCH")
        {
            std::cout << "Enter the index : ";
            std::getline(std::cin, index);
            std::cout << std::endl;
            if (check_nbr(index) != 0)
            {
                index_int = atoi(index.c_str());
                if (index_int > 0 && index_int < reper.get_nbr())
                    reper.print_contact(index_int);
                else
                    std::cout << "Index is superior/inferieur to the number of contact" << std::endl;
            }
            else
                std::cout << "Index is not a digit" << std::endl;
        }
        else if (buf == "EXIT")
            exit(EXIT_SUCCESS);
    }
    return 0;
}