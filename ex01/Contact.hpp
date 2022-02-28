/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:04:15 by misaev            #+#    #+#             */
/*   Updated: 2022/02/26 17:37:45 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
	public:
        Contact(void);
        Contact(std::string frst_name, std::string lst_name, std::string surname, int phone_nbr, std::string darkest_secret);
 		~Contact();
	private:
		std::string frst_name;
		std::string lst_name;
		std::string surname;
		int	phone_nbr;
		std::string darkest_secret;
};

