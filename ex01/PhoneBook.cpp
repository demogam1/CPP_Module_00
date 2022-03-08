/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:11:17 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 13:18:31 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->nbr_contact = 1;
    std::cout << GREEN_BOLD << "Constructeur appeler" << END_GREEN_BOLD << std::endl;
    return;
}

PhoneBook::~PhoneBook()
{
    std::cout << RED_BOLD << "PhoneBook Destructeur appeler" << END_RED_BOLD << std::endl;
    return;    
}

int PhoneBook::get_nbr(void) const
{
    return this->nbr_contact;    
}

void PhoneBook::add_new_contact(void)
{
    std::string frst_name;
    std::string lst_name;
    std::string surname;
    std::string phone_nbr;
    std::string darkest_secret;
    if (this->nbr_contact == 8)
        this->nbr_contact = 0;
    std::cout << "First Name: ";
    std::getline(std::cin , frst_name);
    if (frst_name.size() != 0 || check_name(frst_name) == 0)
    {
        std::cout << RED_BOLD "Error ! The First Name should contain only letters" END_RED_BOLD << std::endl;
        return;
    }
    std::cout << "Last Name: ";
    std::getline(std::cin , lst_name);
    if (lst_name.size() != 0 || check_name(lst_name) == 0)
    {
        std::cout << RED_BOLD "Error ! The Last Name should contain only letters" END_RED_BOLD << std::endl;
        return;
    }
    std::cout << "Surname: ";
    std::getline(std::cin, surname);
    std::cout << "Phone Number: ";
    std::getline(std::cin,phone_nbr);
    if (phone_nbr.size() != 0 || check_nbr(phone_nbr) == 0)
    {
        std::cout << RED_BOLD "Error ! The Phone Number should contain only numbers" END_RED_BOLD << std::endl;
        return;
    }  
    std::cout << "Darkest Secret: ";
    std::getline(std::cin,darkest_secret);
    list_of_contact[this->nbr_contact] = Contact(frst_name,lst_name,surname, phone_nbr, darkest_secret);
    this->nbr_contact++;
}

void PhoneBook::print_contact(int index) const
{
    std::cout << std::right << std::setw(10) << GREEN_BOLD"|    Index |First Name|Last Name |Surname "END_GREEN_BOLD << std::endl;
    std::cout << PIPE;
    std::cout << std::right << std::setw(10) << index;
    std::cout << PIPE;
    std::cout << std::right << std::setw(10) << list_of_contact[index].return_name().substr(0,10);
    if (list_of_contact[index].return_name().length() > 10)
         std::cout << ".";
    std::cout << PIPE;
    std::cout << std::right << std::setw(10) << list_of_contact[index].return_lstname().substr(0,10);
    if (list_of_contact[index].return_lstname().length() > 10)
         std::cout << ".";
    std::cout << PIPE;
    if (list_of_contact[index].return_surname().length() > 10)
         std::cout << ".";
    std::cout << std::right << std::setw(10) << list_of_contact[index].return_surname().substr(0,10);
    std::cout << PIPE << std::endl;
}