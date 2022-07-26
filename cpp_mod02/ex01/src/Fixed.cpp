/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:48:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/26 17:39:42 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"
#include <iostream>
#include <cmath>

Fixed::Fixed(): val(0)
{
	std::cout << "Default constructor called.\n";
}

Fixed::Fixed(Fixed& other)
{
	std::cout << "Copy constructor called.\n";
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

Fixed & Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called.\n";
	this->val = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called.\n";
	this->val = nb << Fixed::fract_bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float contructor called.\n";
	this->val = roundf(nb * (1 << this->fract_bits));
}

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (this->val >> Fixed::fract_bits);
}

float Fixed::toFloat() const
{
	return (static_cast<float>(this->val / static_cast<float>(1 << this->fract_bits)));
}

int Fixed::toInt() const
{
	return (this->val >> fract_bits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}
