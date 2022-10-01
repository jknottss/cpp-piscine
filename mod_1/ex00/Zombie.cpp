/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <jknotts@student.21-school>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:21:28 by  jknotts          #+#    #+#             */
/*   Updated: 2022/10/01 15:23:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name) : _name(name)
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