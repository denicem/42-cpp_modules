/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:48:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/26 21:41:37 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"

#include <iostream>
#include <cmath>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Fixed::Fixed(): val(0)
{
	std::cout << "Default constructor called.\n";
}

Fixed::Fixed(const Fixed& other): val(other.val)
{
	std::cout << "Copy constructor called.\n";
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


Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &other)
		this->val = other.getRawBits();
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (this->val);
}

void Fixed::setRawBits(const int raw)
{
	this->val = raw;
}

/*
** ----------------------- METHODS -----------------------
*/

int Fixed::toInt() const
{
	return (this->val >> fract_bits);
}

float Fixed::toFloat() const
{
	return (static_cast<float>(this->val) / static_cast<float>(1 << this->fract_bits));
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return (stream);
}
