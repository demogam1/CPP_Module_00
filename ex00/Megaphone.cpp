/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:04:32 by misaev            #+#    #+#             */
/*   Updated: 2022/02/11 11:59:58 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **argv)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
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
				std::cout << c;
				j++;
			}
			if (i + 1 != ac)
				std::cout << " ";
			i++;
		}
	}
	return 0;
}