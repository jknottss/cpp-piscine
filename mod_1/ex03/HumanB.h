/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by                   #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"
class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &gun);
	void attack();

private:
	std::string _name;
	Weapon *_gun;
};


#endif
