/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:53:13 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 21:10:53 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog created (Default).\n";
}

Dog::Dog(const Dog &other): Animal(other)
{
	*this = other;
	this->brain = new Brain();
	std::cout << "Dog created (Copy).\n";
}
Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Dog& Dog::operator=(const Dog &other)
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

void Dog::makeSound() const
{
	std::cout << "🐶 Woof, woof...\n";
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

/*
** ----------------------- FUNCS -----------------------
*/
