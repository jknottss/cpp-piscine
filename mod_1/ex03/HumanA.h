/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by                   #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA {
public:
	HumanA(std::string name, Weapon &gun);
	~HumanA();
	void attack(void);

private:
	std::string _name;
	Weapon *_gun;
};


#endif
