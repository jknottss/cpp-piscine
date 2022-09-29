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
    if (index == 7)
        index = 0;
    contacts[index].Create();
    index++;
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

}

int PhoneBook::printAll()
{
    int i;
    std::cout << "+--------------------------------------+\n"
                 "|Index| FirstName| LastName | NickName |\n"
                 "+--------------------------------------+\n";
    for (i = 0; i < 8; i++)
    {
        if(contacts[i].getFirstName().empty())
            break;
    }
    std::cout << "|" << std::setw(5) << i + 1 << "|";

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