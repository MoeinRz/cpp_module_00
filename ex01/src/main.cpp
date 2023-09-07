/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/07 12:47:59 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int main(void)
{
	std::string	input;
	Contact		contact[8];
	int  		index = 0;

	while (input != "EXIT")
	{
		std::cout << "Enter your selection:\nADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);

		if (input != "ADD" && input != "SEARCH" && input != "EXIT")
		{
			std::cout << "Your command is wrong" << std::endl;
		}
		else if (input == "ADD")
		{
			if (index < 8)
            {
                contact[index].setFirstName();
                contact[index].setLastName();
                contact[index].setNickName();
                contact[index].setPhoneNumber();
                contact[index].setDarkestSecret();
                index++;
            }
			else
            {
                std::cout << "Contact list is full I have to replace the first contact." << std::endl;
				index = 0;
				contact[index].setFirstName();
				contact[index].setLastName();
				contact[index].setNickName();
				contact[index].setPhoneNumber();
				contact[index].setDarkestSecret();
				index++;
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Your selection is EXIT" << std::endl;
			exit (0);
		}
		else if (input == "SEARCH")
		{
			std::cout << "Pleas enter index of contact:" << std::endl;
			std::cin >> index;
			if (index >= 0 && index < 8)
			{
				contact[index].getFirstName();
				contact[index].getLastName();
				contact[index].getNickName();
				contact[index].getPhoneNumber();
				contact[index].getDarkestSecret();
			}
			else
			{
				std::cout << "Your index is wrong" << std::endl;
			}
		}
	}
	return (0);
}
