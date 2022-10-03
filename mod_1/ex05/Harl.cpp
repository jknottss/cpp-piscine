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
    std::cout << "This is unacceptable! " <<
              "I want to speak to the manager now." << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money." <<
              "You didn’t put enough bacon in my burger! If you did, " <<
              "I wouldn’t be asking for more!" << std::endl;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my" <<
              " 7XL-double-cheese-triple-pickle-special- " <<
              "ketchup burger.I really do!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. " <<
              "I’ve been coming for years whereas you started working " <<
              "here since last month." << std::endl;
}

void Harl::complain(std::string level) {

    void (Harl::*func[])(void) = {
            &Harl::debug,
            &Harl::error,
            &Harl::info,
            &Harl::warning
    };


    std::string lvl[4] = {"DEBUG", "ERROR" , "INFO", "WARNING" };

    for(int i = 0; i < 4; i++)
    {
        if (lvl[i] == level)
        {
            (this->*func[i])();
            return;
        }
    }
    std::cerr << "wrong argument" << std::endl;
}
