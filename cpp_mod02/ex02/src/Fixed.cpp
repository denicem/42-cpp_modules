/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:48:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/27 17:21:00 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed(): val(0)
{
	// std::cout << "Default constructor called.\n";
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called.\n";
	*this = other;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called.\n";
	this->val = nb << Fixed::fract_bits;
}

Fixed::Fixed(const float nb)
{
	// std::cout << "Float contructor called.\n";
	this->val = roundf(nb * (1 << this->fract_bits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called.\n";
}

/////////////////////////////////////////////

Fixed& Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called.\n";
	this->val = other.getRawBits();
	return (*this);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->val == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->val != other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->val < other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->val <= other.getRawBits());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->val > other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->val >= other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other)
{
	int res;
	Fixed tmp;

	res = this->val + other.getRawBits();
	tmp.setRawBits(res);
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &other)
{
	int res;
	Fixed tmp;

	res = this->val - other.getRawBits();
	tmp.setRawBits(res);
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &other)
{
	int res;
	Fixed tmp;

	res = this->val * other.getRawBits() / (1 << tmp.fract_bits);
	tmp.setRawBits(res);
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other)
{
	int res;
	Fixed tmp;

	res = this->val / other.getRawBits() * (1 << tmp.fract_bits);
	tmp.setRawBits(res);
	return (tmp);
}

Fixed& Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->val++;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->val--;
	return (tmp);
}

/////////////////////////////////////////////

float Fixed::toFloat() const
{
	return (static_cast<float>(this->val / static_cast<float>(1 << this->fract_bits)));
}

int Fixed::toInt() const
{
	return (this->val >> fract_bits);
}

/////////////////////////////////////////////

void Fixed::setRawBits(const int raw)
{
	this->val = raw;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called.\n";
	return (this->val);
}

/////////////////////////////////////////////

Fixed& Fixed::min(Fixed &fp1, Fixed &fp2)
{
	return (fp1 < fp2 ? fp1 : fp2);
}

const Fixed& Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
	return (static_cast<Fixed>(fp1) < static_cast<Fixed>(fp2) ? fp1 : fp2);
}

Fixed& Fixed::max(Fixed &fp1, Fixed &fp2)
{
	return (fp1 > fp2 ? fp1 : fp2);
}

const Fixed& Fixed::max(const Fixed& fp1, const Fixed& fp2)
{
	return (static_cast<Fixed>(fp1) > static_cast<Fixed>(fp2) ? fp1 : fp2);
}

/////////////////////////////////////////////

std::ostream& operator<<(std::ostream& stream, const Fixed &fp)
{
	stream << fp.toFloat();
	return (stream);
}
