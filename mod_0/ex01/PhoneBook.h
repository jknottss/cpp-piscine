/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>       +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:43:52 by jknotts           #+#    #+#             */
/*   Updated: 2022/09/26 23:35:44 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "iostream"
#include "string.h"
#include "Contact.h"

class PhoneBook {

public:
    PhoneBook();
    ~PhoneBook();
    void AddContact();
    void FindContact();
private:
    int index;
    void drawCommands();
    Contact contacts[7];
    void printAll();
    void printStr(std::string &str);
};


#endif
