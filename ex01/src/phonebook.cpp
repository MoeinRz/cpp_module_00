/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:02:03 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/11 12:08:52 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 1;
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
	if (_index <= 9 && _index > 0)
	{
		_contact[_index].setContact();
		_index++;
	}
	else if (_index > 9)
	{
		std::cout << "Contact list is full. Replacing the first contact." << std::endl;
		_index = 1;
		_contact[_index].setContact();
		_index++;
	}
}

void PhoneBook::searchContact(int display_index) {
	if (display_index > 0 && display_index <= 9) {
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|         " << display_index;
		std::cout << "|";
		std::cout << transformString(_contact[display_index].getFirstName()) << "|";
		std::cout << transformString(_contact[display_index].getLastName()) << "|";
		std::cout << transformString(_contact[display_index].getNickName()) << "|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
	} else {
		std::cout << "Your index is wrong" << std::endl;
	}
}
