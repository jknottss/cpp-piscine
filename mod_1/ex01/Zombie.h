/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <jknotts@student.21-school>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:21:28 by  jknotts          #+#    #+#             */
/*   Updated: 2022/10/01 19:27:53 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
	public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string name);

	private:
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
