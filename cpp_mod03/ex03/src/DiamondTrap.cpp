/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:44:11 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 22:05:14 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::setName(this->getName() + "_clap_name");
	this->setHP(FragTrap::getHP());
	this->setEP(ScavTrap::getEP());
	this->setAD(FragTrap::getAD());
	std::cout << "DiamondTrap NONAME created (Default).\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	ClapTrap::setName(this->getName() + "_clap_name");
	*this = other;
	std::cout << "DiamondTrap " << this->getName() << " created (Copy)\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->setHP(FragTrap::getHP());
	this->setEP(ScavTrap::getEP());
	this->setAD(FragTrap::getAD());
	std::cout << "DiamondTrap " << this->getName() << " created.\n";
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getName() << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
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

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->getName() << std::endl << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream &stream, const DiamondTrap &dt)
{
	stream << "-\n"
			<< "DiamondTrap\n"
			<< "Name:\t" << dt.getName() << std::endl
			<< "HP:\t" << dt.getHP() << std::endl
			<< "EP:\t" << dt.getEP() << std::endl
			<< "AD:\t" << dt.getAD() << std::endl;
	return (stream);
}
