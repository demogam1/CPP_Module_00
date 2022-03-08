/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:11:43 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 13:20:29 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact()
{
    std::cout << RED_BOLD << "Contact Destructeur appeler" << END_RED_BOLD << std::endl;
    return;    
}

Contact::Contact(void)
{
    std::cout << GREEN_BOLD << "Constructeur appeler" << END_GREEN_BOLD << std::endl;
    return;    
}

Contact::Contact(std::string frst_name, std::string lst_name, std::string surname, std::string phone_nbr, std::string darkest_secret)
{
    this->frst_name = frst_name;
    this->lst_name = lst_name;
    this->surname = surname;
    this->phone_nbr = phone_nbr;
    this->darkest_secret = darkest_secret;
    return;
}

std::string Contact::return_name(void) const
{
    return frst_name;
}

std::string Contact::return_lstname(void) const
{
    return lst_name;
}

std::string Contact::return_surname(void) const
{
    return surname;   
}

