/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:04:15 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 13:19:54 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define RED_BOLD "\033[1;31m"
#define END_RED_BOLD "\033[0m"
#define GREEN_BOLD "\033[1;32m"
#define END_GREEN_BOLD "\033[0m"

class Contact
{
	public:
        Contact(void);
        Contact(std::string frst_name, std::string lst_name, std::string surname, std::string phone_nbr, std::string darkest_secret);
 		~Contact();
		std::string return_name(void) const;
		std::string return_lstname(void) const;
		std::string return_surname(void) const;

	private:
		std::string frst_name;
		std::string lst_name;
		std::string surname;
		std::string phone_nbr;
		std::string darkest_secret;
};

