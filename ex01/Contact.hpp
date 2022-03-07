/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:04:15 by misaev            #+#    #+#             */
/*   Updated: 2022/03/01 10:39:07 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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

