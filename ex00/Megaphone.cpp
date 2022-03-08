/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:04:32 by misaev            #+#    #+#             */
/*   Updated: 2022/03/08 13:16:40 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

int main(int ac, char **argv)
{
	if (ac < 2)
	{
		std::cout << GRN << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << NC << std::endl;
		return 1;
	}
	else
	{
		int i = 1;
		int j = 0;
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				char c = toupper(argv[i][j]);
				std::cout << GRN << c;
				j++;
			}
			if (i + 1 != ac)
				std::cout << " ";
			i++;
		}
	}
	return 0;
}