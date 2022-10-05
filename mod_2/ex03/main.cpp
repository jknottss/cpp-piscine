/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:11:44 by                   #+#    #+#             */
/*   Updated: 2022/10/05 23:40:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int main()
{
	Point one;
	Point two(20, 10.5f);

	Point a(5, 0);
	Point b(30, 0);
	Point c(0, 40);


	std::cout << "[TEST: 1] - Point out of the triangle" << std::endl;
	if (bsp(a, b, c, one))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	std::cout << "[TEST: 2] - Point in the triangle" << std::endl;
	if (bsp(a, b, c, two))
		std::cout << "in" << std::endl;
	else
		std::cout << "out" << std::endl;

	return 0;
}

