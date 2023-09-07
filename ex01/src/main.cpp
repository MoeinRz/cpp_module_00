/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/07 17:24:57 by mrezaei          ###   ########.fr       */
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
	Contact		contact[8];
	int  		index = 0;

	while (input != "EXIT")
	{
		std::cout << "Enter your selection:\nADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);

		if (input != "ADD" && input != "SEARCH" && input != "EXIT")
			std::cout << "Wrong input." << std::endl;	
		else if (input == "ADD")
		{
			if (index < 8)
            {
                contact[index].setContact();
                index++;
            }
			else
            {
                std::cout << "Contact list is full I have to replace the first contact." << std::endl;
				index = 0;
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
			std::cin >> index;
			std::cin.ignore(); 
			if (index > 0 && index < 9)
				index--;
			else
			{
				std::cout << "Your index is wrong" << std::endl;
				continue;
			}
			if (index + 1 > 0 && index + 1 < 8)
			{
				std::cout << "|-------------------------------------------|" << std::endl;
				std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
				std::cout << "|----------|----------|----------|----------|" << std::endl;
				std::cout << "|         " << index + 1;
				std::cout << "|";
				std::cout << transformString(contact[index].getFirstName()) << "|";
				std::cout << transformString(contact[index].getLastName()) << "|";
				std::cout << transformString(contact[index].getNickName()) << "|" << std::endl;
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
