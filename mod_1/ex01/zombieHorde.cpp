/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <jknotts@student.21-school>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:21:28 by  jknotts          #+#    #+#             */
/*   Updated: 2022/10/01 19:33:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return horde;
}
