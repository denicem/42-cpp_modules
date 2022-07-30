/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:54:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 20:59:21 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

FragTrap::FragTrap(): ClapTrap()
{
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "FragTrap NONAME created (Default).\n";
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << this->getName() << " created (Copy)\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->setName(name);
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	std::cout << "FragTrap " << this->getName() << " created.\n";

}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHP(other.getHP());
		this->setEP(other.getEP());
		this->setAD(other.getAD());
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " requests a High Five.\n";
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream &stream, const FragTrap &st)
{
	stream << "-\n"
			<< "FragTrap\n"
			<< "Name:\t" << st.getName() << std::endl
			<< "HP:\t" << st.getHP() << std::endl
			<< "EP:\t" << st.getEP() << std::endl
			<< "AD:\t" << st.getAD() << std::endl;
	return (stream);
}
