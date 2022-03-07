/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:57:53 by misaev            #+#    #+#             */
/*   Updated: 2022/03/01 11:22:56 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <locale>
#include <iomanip> 
#include "Contact.hpp"
#define RED_BOLD "\033[1;31m"
#define END_RED_BOLD "\033[0m"
#define GREEN_BOLD "\033[1;32m"
#define END_GREEN_BOLD "\033[0m"
#define PIPE "|"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook();
		void print_contact(int index) const;
		int get_nbr(void) const;
		void add_new_contact(void);
	private:
		int nbr_contact;
		Contact list_of_contact[8];
};

int check_name(std::string str);
int check_nbr(std::string str);