/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:18:18 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 21:30:35 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.h"

#include <iostream>
#include <string>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

AMateria::AMateria(): type("")
{
	std::cout << "Materia created (Default).\n";
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
	std::cout << "Materia created (Copy).\n";
}

AMateria::AMateria(std::string const & type): type(type)
{
	std::cout << "Materia created.\n";
}

AMateria::~AMateria()
{
	std::cout << "Materia destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

AMateria& AMateria::operator=(const AMateria& other)
{
	this->type = other.type;
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void AMateria::use(ICharacter& target)
{
	std::cout << "* a normal materia is no use for " << target.getName() << " *\n";
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string const & AMateria::getType() const
{
	return (this->type);
}

/*
** ----------------------- FUNCS -----------------------
*/