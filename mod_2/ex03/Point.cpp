/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:47:36 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/05 23:21:37 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.h"

Point::Point()
{

}

Point::Point(float x, float y) : _x(x), _y(y)
{

}

Point::Point(const Point &rhs)
{
	*this = rhs;
}

Point::~Point()
{

}

Point &Point::operator=(const Point &rhs)
{
	if (this == &rhs)
		return *this;
	_x = rhs.getX();
	_y = rhs.getY();
	return *this;
}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}