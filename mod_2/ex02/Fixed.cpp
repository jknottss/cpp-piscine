/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int Fixed::_fract = 8;

Fixed::Fixed() : _point(0)
{

}

Fixed::Fixed(int const val)
{
    _point = val << _fract;

}

Fixed::Fixed(const float val)
{
    _point = (int)roundf(val * (1 << _fract));

}

Fixed::Fixed(const Fixed &src)
{

    *this = src;
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
        _point = rhs.getRawBits();

    return *this;
}

float Fixed::toFloat(void) const
{
    return ((float)_point / (1 << _fract));
}

int Fixed::toInt() const
{
    return (_point >> _fract);
}

int Fixed::getRawBits() const
{
    return _point;
}

void Fixed::setRawBits(const int raw)
{
    _point = raw;
}

std::ostream & operator<<(std::ostream &o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed &rhs) const
{
    return _point > rhs._point;
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return _point < rhs._point;
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return _point == rhs._point;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return _point != rhs._point;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return _point <= rhs._point;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return _point >= rhs._point;
}

Fixed &Fixed::operator++()
{
    _point++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    _point++;
    return tmp;
}

Fixed &Fixed::operator--()
{
    _point--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    _point--;
    return tmp;
}

Fixed Fixed::operator+(const Fixed &rhs)
{
    return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs)
{
    return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs)
{
    return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs)
{
    return Fixed(toFloat() / rhs.toFloat());
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
    if (one < two)
        return one;
    return two;
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    if (one < two)
        return two;
    return one;
}

const Fixed &Fixed::min(const Fixed &one, const Fixed &two)
{
    if (one < two)
        return one;
    return two;
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
    if (one < two)
        return two;
    return one;
}