/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:56:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:21:19 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat created (Default).\n";
}

Cat::Cat(const Cat &other): Animal(other)
{
	*this = other;
	std::cout << "Cat created (Copy).\n";
}
Cat::~Cat()
{
	std::cout << "Cat destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Cat& Cat::operator=(const Cat &other)
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

void Cat::makeSound() const
{
	std::cout << "🐱 Meoooww ..\n";
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

/*
** ----------------------- FUNCS -----------------------
*/
