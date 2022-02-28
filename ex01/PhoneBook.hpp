/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:57:53 by misaev            #+#    #+#             */
/*   Updated: 2022/02/25 14:04:55 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <locale>
#include "Contact.hpp"
#define RED_BOLD "\033[1;31m"
#define END_RED_BOLD "\033[0m"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook();
		void print_contact() const;
		void add_new_contact(void);
	private:
		Contact list_of_contact[8];
};

int check_name(std::string str);
