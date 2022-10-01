/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:41:55 by  jknotts          #+#    #+#             */
/*   Updated: 2022/10/01 18:13:50 by  jknotts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

