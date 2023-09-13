/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/13 14:26:42 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int main(void)
{
    std::string input;
    std::string display_index_str;
    PhoneBook   phonebook;

    while (input != "EXIT")
	{
        std::cout << "Enter your selection:\nADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			exit(0);
		}
        else
        {
            if (input == "ADD") 
                phonebook.addContact();
            else if (input == "EXIT")
                std::cout << "Exit." << std::endl;
            else if (input == "SEARCH")
                    phonebook.searchContact();
            else
                std::cout << "Wrong input." << std::endl;
        }
    }
    return 0;
}
