/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:48:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/22 02:48:16 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"
#include <iostream>

Fixed::Fixed(): fp(0)
{
	std::cout << "Default constructor called.\n";
}

Fixed::Fixed(Fixed& other): fp(other.fp)
{
	std::cout << "Copy constructor called.\n";
	// this->fp = other.fp;
	// *this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

Fixed & Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called.\n";
	this->fp = other.getRawBits();
	return (*this);
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called.\n";
	this->fp = nb << Fixed::fract_bits;

}

void Fixed::setRawBits(int const raw)
{
	this->fp = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (this->fp >> Fixed::fract_bits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed &f)
{
	stream << f.getRawBits();
	return (stream);
}
