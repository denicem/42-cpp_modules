/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:54:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 20:15:51 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

ScavTrap::ScavTrap(): ClapTrap()
{
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	std::cout << "ScavTrap NONAME created (Default).\n";
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap " << this->getName() << " created (Copy)\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->setName(name);
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	std::cout << "ScavTrap " << this->getName() << " created.\n";
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::attack(const std::string &target)
{
	if (this->getHP() && this->getEP())
	{
		this->setEP(this->getEP() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAD() << " point(s) of damage!\n";
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode.\n";
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream &stream, const ScavTrap &st)
{
	stream << "-\n"
			<< "ScavTrap\n"
			<< "Name:\t" << st.getName() << std::endl
			<< "HP:\t" << st.getHP() << std::endl
			<< "EP:\t" << st.getEP() << std::endl
			<< "AD:\t" << st.getAD() << std::endl;
	return (stream);
}
