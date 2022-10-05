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
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val)
{
    _point = val << _fract;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
    _point = (int)roundf(val * (1 << _fract));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
        _point = rhs.getRawBits();

    std::cout << "Copy assignment operator called" << std::endl;
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
