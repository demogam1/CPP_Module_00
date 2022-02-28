/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:11:17 by misaev            #+#    #+#             */
/*   Updated: 2022/02/26 17:35:14 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Constructeur appeler" << std::endl;
    return;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Destructeur appeler" << std::endl;
    return;    
}

void PhoneBook::add_new_contact(void)
{
    std::string frst_name;
    std::string lst_name;
    std::string surname;
    int phone_nbr;
    std::string darkest_secret;
    
    std::cout << "First Name";
    std::cin >> frst_name;
    if (check_name(frst_name) == 0)
    {
        std::cout << RED_BOLD "Error ! The name should contain only letters" END_RED_BOLD;
        return;
    }
    std::cout << "Last Name";
    std::cin >> lst_name;
    if (check_name(lst_name) == 0)
    {
        std::cout << RED_BOLD "Error ! The name should contain only letters" END_RED_BOLD;
        return;
    }
    list_of_contact[0] = Contact(frst_name,lst_name,"toto", 0631260437,"je suis zoophile");
}