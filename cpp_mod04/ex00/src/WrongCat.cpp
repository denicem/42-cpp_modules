/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:56:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:13:21 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat created (Default).\n";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	*this = other;
	std::cout << "WrongCat created (Copy).\n";
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void WrongCat::makeSound() const
{
	std::cout << "Meoooww ..\n";
}

