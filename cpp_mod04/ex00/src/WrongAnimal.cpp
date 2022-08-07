/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:29:01 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:20:41 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

WrongAnimal::WrongAnimal(): type("no type")
{
	std::cout << "WrongAnimal created (Default).\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal created (Copy).\n";
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
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

void WrongAnimal::makeSound() const
{
	std::cout << "What sound should I make?\n";
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

