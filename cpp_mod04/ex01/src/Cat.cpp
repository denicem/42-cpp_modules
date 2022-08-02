/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:56:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 21:11:06 by dmontema         ###   ########.fr       */
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
	this->brain = new Brain();
	std::cout << "Cat created (Default).\n";
}

Cat::Cat(const Cat &other): Animal(other)
{
	*this = other;
	this->brain = new Brain();
	std::cout << "Cat created (Copy).\n";
}
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->brain = new Brain(*other.brain);
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
