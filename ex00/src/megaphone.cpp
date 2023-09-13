/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/13 12:31:30 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int			i = 1;
	int			j;
	int			len;
	std::string	str;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			str = argv[i];
			j = 0;
			len = str.length();
			while (j < len)
			{
        		str[j] = std::toupper(str[j]);
        		j++;
			}
			std::cout << str;
			std::cout << " ";
			i++;
    	}
		std::cout << std::endl;
	}
	return (0);
}
