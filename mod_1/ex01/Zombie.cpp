/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <jknotts@student.21-school>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:21:28 by  jknotts          #+#    #+#             */
/*   Updated: 2022/10/01 19:27:53 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << _name << " was destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
	_name = name;
}