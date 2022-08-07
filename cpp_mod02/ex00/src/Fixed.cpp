/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:48:16 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/26 16:51:07 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called.\n";
	this->val = 0;
}

Fixed::Fixed(const Fixed& other): val(other.val)
{
	std::cout << "Copy constructor called.\n";
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

void Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (this->val);
}
