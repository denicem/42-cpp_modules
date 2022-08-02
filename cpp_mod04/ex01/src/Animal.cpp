/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:29:01 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:21:33 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Animal::Animal(): type("no type")
{
	std::cout << "Animal created (Default).\n";
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal created (Copy).\n";
}
Animal::~Animal()
{
	std::cout << "Animal destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Animal& Animal::operator=(const Animal &other)
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

void Animal::makeSound() const
{
	std::cout << "🤔 What sound should I make?\n";
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

/*
** ----------------------- FUNCS -----------------------
*/
