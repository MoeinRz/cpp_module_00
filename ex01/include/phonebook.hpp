/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrezaei <mrezaei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:49:38 by moeinrz           #+#    #+#             */
/*   Updated: 2023/09/07 11:34:35 by mrezaei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

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
    
    Contact(
    std::string firstName,
    std::string lastName,
    std::string nickName,
    std::string phoneNumber,
    std::string darkestSecret
    );
    void setFirstName();
    void setLastName();
    void setNickName();
    void setPhoneNumber();
    void setDarkestSecret();

    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    
    // void setFirstName(const std::string& firstName)
    // {
    //     this->firstName = firstName;
    // }

    // void setLastName(const std::string& lastName)
    // {
    //     this->lastName = lastName;
    // }

    // void setNickname(const std::string& nickname)
    // {
    //     this->nickname = nickname;
    // }

    // void setPhoneNumber(const std::string& phoneNumber)
    // {
    //     this->phoneNumber = phoneNumber;
    // }

    // void setDarkestSecret(const std::string& darkestSecret)
    // {
    //     this->darkestSecret = darkestSecret;
    // }

    // std::string getFirstName() const
    // {
    //     return firstName;
    // }

    // std::string getLastName() const
    // {
    //     return lastName;
    // }

    // std::string getNickname() const
    // {
    //     return nickname;
    // }

    // std::string getPhoneNumber() const
    // {
    //     return phoneNumber;
    // }

    // std::string getDarkestSecret() const
    // {
    //     return darkestSecret;
    // }
};

#endif
