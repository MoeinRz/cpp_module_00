/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/08 14:36:52 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

std::string transformString(const std::string& input)
{
    std::string result;

    if (input.length() == 10)
		result = input;
	else if (input.length() < 10)
        result = std::string(10 - input.length(), ' ') + input;
	else
	{
        result = input.substr(0, 9);
        result += '.';
    }
    return result;
}

int main(void)
{
	std::string	input;
	Contact		contact[10];
	int  		index = 1;
	int			display_index;

	while (input != "EXIT")
	{
		std::cout << "Enter your selection:\nADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);

		if (input != "ADD" && input != "SEARCH" && input != "EXIT")
			std::cout << "Wrong input." << std::endl;	
		else if (input == "ADD")
		{
			if (index <= 9 && index > 0)
            {
                contact[index].setContact();
				index++;
            }
			else if (index > 9)
            {
                std::cout << "Contact list is full I have to replace the first contact." << std::endl;
				index = 1;
				contact[index].setContact();
				index++;
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit." << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "Pleas enter index of contact:" << std::endl;
			std::cin >> display_index;
			std::cin.ignore(); 
			if (display_index > 0 && display_index <= 9)
			{
				std::cout << "|-------------------------------------------|" << std::endl;
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
				std::cout << "|         " << display_index;
				std::cout << "|";
				std::cout << transformString(contact[display_index].getFirstName()) << "|";
				std::cout << transformString(contact[display_index].getLastName()) << "|";
				std::cout << transformString(contact[display_index].getNickName()) << "|" << std::endl;
			    std::cout << "|-------------------------------------------|" << std::endl;
			}
			else
			{
				std::cout << "Your index is wrong" << std::endl;
			}
		}
	}
	return (0);
}
