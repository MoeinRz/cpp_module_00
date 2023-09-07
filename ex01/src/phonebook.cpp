/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:02:03 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/07 11:42:53 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

Contact::Contact(void)
{
    std::cout << "Contact created" << std::endl;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::setFirstName()
{
    std::cout << "Enter your first name: ";
    std::cin >> this->_firstName;
    return ;
}

void    Contact::setLastName()
{
    std::cout << "Enter your last name: ";
    std::cin >> this->_lastName;
    return ;
}

void    Contact::setNickName()
{
    std::cout << "Enter your nickname: ";
    std::cin >> this->_nickname;
    return ;
}

void    Contact::setPhoneNumber()
{
    std::cout << "Enter your phone number: ";
    std::cin >> this->_phoneNumber;
    return ;
}

void    Contact::setDarkestSecret()
{
    std::cout << "Enter your darkest secret: ";
    std::cin >> this->_darkestSecret;
    return ;
}

std::string Contact::getFirstName()
{
    std::cout << "First name: " << this->_firstName << std::endl;
    return this->_firstName;
}

std::string Contact::getLastName()
{
    std::cout << "Last name: " << this->_lastName << std::endl;
    return this->_lastName;
}

std::string Contact::getNickName()
{
    std::cout << "Nickname: " << this->_nickname << std::endl;
    return this->_nickname;
}

std::string Contact::getPhoneNumber()
{
    std::cout << "Phone number: " << this->_phoneNumber << std::endl;
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret()
{
    std::cout << "darkest secret: " << this->_darkestSecret << std::endl;
    return this->_darkestSecret;
}
