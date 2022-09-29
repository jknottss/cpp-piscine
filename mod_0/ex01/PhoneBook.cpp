/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>       +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:43:52 by jknotts           #+#    #+#             */
/*   Updated: 2022/09/26 23:35:44 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.h"

PhoneBook::PhoneBook() : index(0)
{
    printCommands();
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::AddContact()
{
    contacts[index].Create();
    index++;
    if (index == 8)
        index = 0;
}
void PhoneBook::FindContact()
{
    int i;
    int in;

    if (contacts[0].getFirstName().empty())
    {
        std::cout << "PhoneBook is empty :(" << std::endl;
        return;
    }

    i = printAll();
    std::cout << "Enter index: ";
    std::cin >> in;
    if (in > 0 && in < i+1)
    {
        std::cout << "Firstname:\t" << contacts[in-1].getFirstName() << std::endl;
        std::cout << "Lastname\t" << contacts[in-1].getLastName() << std::endl;
        std::cout << "Nickname\t" << contacts[in -1].getNickName() << std::endl;
        std::cout << "Phone number\t" << contacts[in -1].getPhoneNumber() << std::endl;
        std::cout << "Darkest secret\t" << contacts[in -1].getDarkestSecret() << std::endl;
    }
    else
        std::cout << "Wrong index" << std::endl;
    std::cin.clear();
    std::cin.ignore(1000, '\n');
}

int PhoneBook::printAll()
{
    int i;
    std::cout << "+--------------------------------------+\n"
                 "|Index| FirstName| LastName | NickName |\n"
                 "+--------------------------------------+\n";
    for (i = 0; i < 8; i++) {
        if (contacts[i].getFirstName().empty())
            break;

        std::cout << "|" << std::setw(5) << i + 1 << "|";
        printStr(contacts[i].getFirstName());
        printStr(contacts[i].getLastName());
        printStr(contacts[i].getNickName());
        std::cout << "\n";
    }
    std::cout << "+--------------------------------------+\n";
    return i;

}

void PhoneBook::printCommands()
{
    std::cout    << "+-------------------------------------------------------+\n"
                 << "|                  Command list                         |\n"
                 << "+-------------------------------------------------------+\n"
                 << "|     ADD     -   Add new contact                       |\n"
                 << "|     SEARCH  -   Find contact by index                 |\n"
                 << "|     EXIT    -   Exit :)                               |\n"
                 << "+-------------------------------------------------------+\n";
}

void PhoneBook::printStr(std::string &str)
{
    if (str.length() > 10)
        std::cout << str.substr(0,9) << ".|";
    else
        std::cout << std::setw(10) << str << "|";
}