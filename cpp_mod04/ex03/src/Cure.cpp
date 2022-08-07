/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:49:04 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 18:26:40 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.h"
#include "../inc/ICharacter.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Cure::Cure(): AMateria()
{
	this->type = "cure";
	std::cout << "Cure created (Default).\n";
}

Cure::Cure(const Cure& other)
{
	*this = other;
	std::cout << "Cure created (Copy).\n";
}

Cure::Cure(std::string const & type): AMateria(type)
{
	this->type = type;
	std::cout << "Cure created.\n";
}


Cure::~Cure()
{
	std::cout << "Cure destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Cure& Cure::operator=(const Cure& other)
{
	this->type = other.type;
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
