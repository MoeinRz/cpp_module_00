/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:02:03 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/11 09:59:57 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::setContact()
{
    std::cout << "Enter your first name: ";
    std::cin >> this->_firstName;
    std::cout << "Enter your last name: ";
    std::cin >> this->_lastName;
    std::cout << "Enter your nickname: ";
    std::cin >> this->_nickname;
    std::cout << "Enter your phone number: ";
    std::cin >> this->_phoneNumber;
    std::cout << "Enter your darkest secret: ";
    std::cin >> this->_darkestSecret;
    std::cin.ignore(); 
    std::cout << "Your contact saved." << std::endl;
    return ;
}

std::string Contact::getFirstName()
{
    return this->_firstName;
}

std::string Contact::getLastName()
{
    return this->_lastName;
}

std::string Contact::getNickName()
{
    return this->_nickname;
}

std::string Contact::getPhoneNumber()
{
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret()
{
   return this->_darkestSecret;
}
