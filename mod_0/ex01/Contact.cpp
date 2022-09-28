/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>       +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:43:52 by jknotts           #+#    #+#             */
/*   Updated: 2022/09/26 23:35:44 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::Create()
{
    std::cout << "Enter Name: ";
    std::cin >> firstName;

    std::cout << "Enter Last Name: ";
    std::cin >> lastName;

    std::cout << "Enter Nickname: ";
    std::cin >> nickName;

    std::cout << "Enter Phone number: ";
    std::cin >> phoneNumber;

    std::cout << "Enter Darkest Secret: ";
    std::cin >> darkestSecret;
}

std::string &Contact::getFirstName()
{
    return firstName;
}

std::string &Contact::getLastName()
{
    return lastName;
}

std::string &Contact::getNickName()
{
    return nickName;
}

std::string &Contact::getPhoneNumber()
{
    return phoneNumber;
}

std::string &Contact::getDarkestSecret()
{
    return darkestSecret;
}
