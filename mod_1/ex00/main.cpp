/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>       +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:43:52 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/01 18:22:01 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *shon  = newZombie("shon");

	shon->announce();
	delete(shon);
	randomChump("jack");
	return 0;
}
