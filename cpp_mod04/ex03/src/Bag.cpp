/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bag.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:58:25 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/13 17:58:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bag.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Bag::Bag()
{
	std::cout << "Bag created (Default).\n";
}

Bag::Bag(const Bag& other)
{
	*this = other;
	std::cout << "Bag created (Copy).\n";
}


Bag::~Bag()
{
	for (int i = 0; i < 4; i++)
		if (this->materia[i])
			delete this->materia[i];
	std::cout << "Bag destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Bag& Bag::operator=(const Bag& other)
{
	if (this != &other)
		for (int i = 0; i < 4; i++)
			this->materia[i] = other.materia[i];
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void Bag::addMateria(AMateria* mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = mat;
			return ;
		}
	}
}
