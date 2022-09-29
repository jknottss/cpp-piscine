/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>       +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:43:52 by jknotts           #+#    #+#             */
/*   Updated: 2022/09/26 23:35:44 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.h"

int main()
{
    PhoneBook app;
    std::string in;
    while(1)
    {
        std::cout << "Please, enter command: ";
        std::cin >> in;
        if (in == "EXIT")
        {
            std::cout << "Bye :)" << std::endl;
            break;
        }
        else if (in == "ADD")
            app.AddContact();
        else if (in == "SEARCH")
            app.FindContact();
        else
            std::cout << "Enter correct command!" << std::endl;
        clearerr(stdin);
        std::cin.clear();
    }
    return 0;
}