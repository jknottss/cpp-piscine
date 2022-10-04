/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by                   #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : _name(name)
{
	_gun = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &gun)
{
	_gun = &gun;
}

void HumanB::attack()
{
	if (_gun == nullptr)
	{
		std::cout << _name << " scream and run away" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}