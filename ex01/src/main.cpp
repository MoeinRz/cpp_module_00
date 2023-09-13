/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/13 12:57:48 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int main(void)
{
    std::string input;
    std::string display_index_str;
    // int         display_index;
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
            {
                // std::cout << "Please enter index of contact:" << std::endl;
                // std::getline(std::cin, display_index_str);
                // if (std::cin.eof() == true)
                // {
                //     std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
                //     exit(0);
                // }
                // std::istringstream(display_index_str) >> display_index;
                // if (!std::cin.fail())
                    phonebook.searchContact();
                // else
                //     std::cout << "Invalid input. Please enter a valid integer." << std::endl;
            }
            else
                std::cout << "Wrong input." << std::endl;
        }
    }
    return 0;
}
