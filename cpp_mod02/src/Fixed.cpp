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

Fixed::Fixed()
{
	std::cout << "Default constructor called.\n";
	fp = 0;
}

Fixed::Fixed(Fixed& other)
{
	std::cout << "Copy constructor called.\n";
	// this->fp = other.fp;
	*this = other;
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

void Fixed::setRawBits(int const raw)
{
	this->fp = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (this->fp);
}
