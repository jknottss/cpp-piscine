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
    drawCommands();
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
    if (contacts[0].getFirstName().empty())
    {
        std::cout << "PhoneBook is empty :(" << std::endl;
        return;
    }
}