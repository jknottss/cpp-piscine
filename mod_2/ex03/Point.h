/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:47:27 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/05 22:59:07 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

#ifndef POINT_H
#define POINT_H


class Point {

public:
	Point();
	Point(Point const &rhs);
	Point(float x, float y);
	~Point();
	Point & operator=(Point const &rhs);

	Fixed getX(void) const;
	Fixed getY(void) const;

private:
	Fixed _x;
	Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
