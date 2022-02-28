/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:11:43 by misaev            #+#    #+#             */
/*   Updated: 2022/02/26 17:38:52 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact()
{
    std::cout << "Destructeur appeler" << std::endl;
    return;    
}

Contact::Contact(void)
{
    std::cout << "Constructeur appeler" << std::endl;
    return;    
}

Contact::Contact(std::string frst_name, std::string lst_name, std::string surname, int phone_nbr, std::string darkest_secret)
{
    this->frst_name = frst_name;
    this->lst_name = lst_name;
    this->surname = surname;
    this->phone_nbr = phone_nbr;
    this->darkest_secret = darkest_secret;
    return;
}


