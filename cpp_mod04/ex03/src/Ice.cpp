/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:31:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 16:57:23 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.h"
#include "../inc/ICharacter.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Ice::Ice(): AMateria()
{
	this->type = "ice";
	std::cout << "Ice created (Default).\n";
}

Ice::Ice(const Ice& other): AMateria(other)
{
	*this = other;
	std::cout << "Ice created (Copy).\n";
}

Ice::Ice(std::string const & type): AMateria(type)
{
	this->type = type;
	std::cout << "Ice created.\n";
}

Ice::~Ice()
{
	std::cout << "Ice destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Ice& Ice::operator=(const Ice& other)
{
	this->type = other.type;
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

/*
** ----------------------- FUNCS -----------------------
*/