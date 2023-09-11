/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by mrezaei           #+#    #+#             */
/*   Updated: 2023/09/11 12:38:51 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

public:

    Contact(void);
    ~Contact(void);
    
    void setContact();

    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    std::string transformString(const std::string& input);
};

class PhoneBook 
{
private:
    Contact _contact[10];
    int     _index;

public:
    PhoneBook();
    ~PhoneBook();
    std::string transformString(const std::string& input);
    void addContact();
    void searchContact(int display_index);
    
};

#endif
