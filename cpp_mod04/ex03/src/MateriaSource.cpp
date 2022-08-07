/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:50:34 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 18:27:05 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.h"
#include "../inc/Ice.h"
#include "../inc/Cure.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "MaterieSource created (Default).\n";
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
	std::cout << "MateriaSource created (Copy).\n";
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->inv[i])
			delete this->inv[i];
	std::cout << "MateriaSource destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
		for (int i = 0; i < 4; i++)
			this->inv[i] = other.inv[i];
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void MateriaSource::learnMateria(AMateria* mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inv[i])
		{
			this->inv[i] = mat;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->inv[i] && this->inv[i]->getType() == type)
			return (this->inv[i]);
	return (0);
}
