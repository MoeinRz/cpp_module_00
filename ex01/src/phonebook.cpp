/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:02:03 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/13 14:26:28 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 1;
	this->_isall = 1;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

std::string PhoneBook::transformString(const std::string& input) {
    std::string result;

    if (input.length() == 10)
        result = input;
    else if (input.length() < 10)
        result = std::string(10 - input.length(), ' ') + input;
    else {
        result = input.substr(0, 9);
        result += '.';
    }
    return result;
}

void PhoneBook::addContact()
{
	if (_index < 9 && _index > 0)
	{
		_contact[_index].setContact();
		_index++;
		_isall++;
	}
	else if (_index >= 9)
	{
		std::cout << "Contact list is full. Replacing the first contact." << std::endl;
		_index = 1;
		_isall = 8;
		_contact[_index].setContact();
		_index++;
	}
}

void PhoneBook::searchContact()
{
	int			 display_index;
	std::string display_index_str;
	
	display_index = 0;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (_index == 1)
	{
		std::cout << "|                 Empty                     |" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		return ;
	}
	else
	{
		while(++display_index < _isall)
		{

			std::cout << "|         " << display_index;
			std::cout << "|";
			std::cout << transformString(_contact[display_index].getFirstName()) << "|";
			std::cout << transformString(_contact[display_index].getLastName()) << "|";
			std::cout << transformString(_contact[display_index].getNickName()) << "|" << std::endl;
			std::cout << "|-------------------------------------------|" << std::endl;
		
		}
	}

	std::cout << "Please enter index of contact:" << std::endl;
	std::getline(std::cin, display_index_str);
	if (std::cin.eof() == true)
	{
		std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
		exit(0);
	}
	std::istringstream(display_index_str) >> display_index;
	if (!std::cin.fail() && display_index > 0 && display_index < 9)
		{
			std::cout << "First name: " << _contact[display_index].getFirstName() << std::endl;
			std::cout << "Last name: " << _contact[display_index].getLastName() << std::endl;
			std::cout << "Nick name: " << _contact[display_index].getNickName() << std::endl;
			std::cout << "Phone number: " << _contact[display_index].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << _contact[display_index].getDarkestSecret() << std::endl;
			std::cout << std::endl;
		}
	else
		std::cout << "Invalid input. Please enter a valid integer." << std::endl;
}
