/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/07 12:04:43 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int main(void)
{
	std::string	input;
	Contact		contact[8];

	while (input != "EXIT")
	{
		std::cout << "Enter your selection:\nADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		
		if (input.compare("ADD") == 0)
		{
			std::cout << "Your selection is ADD" << std::endl;
			contact[1].setFirstName();
			contact[1].setLastName();
			contact[1].setNickName();
			contact[1].setPhoneNumber();
			contact[1].setDarkestSecret();		
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Your selection is EXIT" << std::endl;
			exit (0);
		}
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << "Your selection is SEARCH" << std::endl;
			contact[1].getFirstName();
			contact[1].getLastName();
			contact[1].getNickName();
			contact[1].getPhoneNumber();
			contact[1].getDarkestSecret();
		}
		else
		{
			std::cout << "Your selection is wrong" << std::endl;
		}

	}
	return (0);
}
