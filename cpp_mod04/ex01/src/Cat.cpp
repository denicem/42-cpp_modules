/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:56:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 01:48:51 by dmontema         ###   ########.fr       */
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
	this->brain = new Brain(*other.brain);
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
		*this->brain = *other.brain;
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

std::string Cat::getBrain(unsigned index)
{
	if (index < 100)
		return (this->brain->getIdea(index));
	return ("");
}

void Cat::setBrain(unsigned index, std::string idea)
{
	if (index < 100)
		this->brain->setIdea(index, idea);
}

