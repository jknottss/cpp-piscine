/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{

}

Harl::~Harl()
{

}


void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! " <<
              "I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." <<
              "You didn’t put enough bacon in my burger! If you did, " <<
              "I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my" <<
              " 7XL-double-cheese-triple-pickle-special-" <<
              "ketchup burger.I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " <<
              "I’ve been coming for years whereas you started working " <<
              "here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{

    int i;

    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };

    for(i = 0; i < 4; i++)
    {
        if (lvl[i] == level)
            break;
    }
    switch (i)
    {
        case 0:
                debug();
        case 1:
                info();
        case 2:
                warning();
        case 3:
                error();
                break;

        default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
    }
}
