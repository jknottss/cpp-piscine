/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include "cmath"
class Fixed {
public:
    Fixed();
    Fixed(int const val);
    Fixed(float const val);
    ~Fixed();
    Fixed(Fixed const &src);
    Fixed & operator=(Fixed const &rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    bool operator>(Fixed const &rhs) const;
    bool operator<(Fixed const &rhs) const;
    bool operator<=(Fixed const &rhs) const;
    bool operator>=(Fixed const &rhs) const;
    bool operator==(Fixed const &rhs) const;
    bool operator!=(Fixed const &rhs) const;

    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);

    Fixed operator-(Fixed const &rhs);
    Fixed operator+(Fixed const &rhs);
    Fixed operator/(Fixed const &rhs);
    Fixed operator*(Fixed const &rhs);

    static Fixed& max(Fixed &one, Fixed &two);
    static Fixed& min(Fixed &one, Fixed &two);
    static const Fixed& max(const Fixed  &one, const Fixed &two);
    static const Fixed& min(const Fixed &one, const Fixed &two);

private:
    int _point;
    static const int _fract = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
