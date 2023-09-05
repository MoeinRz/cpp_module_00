/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/05 19:20:11 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    void setFirstName(const std::string& firstName)
    {
        this->firstName = firstName;
    }

    void setLastName(const std::string& lastName)
    {
        this->lastName = lastName;
    }

    void setNickname(const std::string& nickname)
    {
        this->nickname = nickname;
    }

    void setPhoneNumber(const std::string& phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    void setDarkestSecret(const std::string& darkestSecret)
    {
        this->darkestSecret = darkestSecret;
    }

    std::string getFirstName() const
    {
        return firstName;
    }

    std::string getLastName() const
    {
        return lastName;
    }

    std::string getNickname() const
    {
        return nickname;
    }

    std::string getPhoneNumber() const
    {
        return phoneNumber;
    }

    std::string getDarkestSecret() const
    {
        return darkestSecret;
    }
};

#endif

getline(cin, str)
