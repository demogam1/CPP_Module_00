/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:11:43 by misaev            #+#    #+#             */
/*   Updated: 2022/03/01 10:39:14 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact()
{
    std::cout << "Contact Destructeur appeler" << std::endl;
    return;    
}

Contact::Contact(void)
{
    std::cout << "Constructeur appeler" << std::endl;
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

