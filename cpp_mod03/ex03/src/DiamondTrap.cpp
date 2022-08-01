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

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(), name("NONAME")
{
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep; // FIXME: the og value from this class (ScavTrap) can't be assigned, because it will be overwritten by the other class (FragTrap)?!?
	this->ad = FragTrap::ad;
	ClapTrap::name = this->name + "_clap_name";
	std::cout << "DiamondTrap NONAME created (Default).\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap " << this->name << " created (Copy)\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(), FragTrap(), name(name)
{
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
	ClapTrap::name = this->name + "_clap_name";
	std::cout << "DiamondTrap " << this->name << " created.\n";
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hp = other.hp;
		this->ep = other.ep;
		this->ad = other.ad;
		ClapTrap::name = this->name + "_clap_name";
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->name << std::endl << "ClapTrap name: " << ClapTrap::name << std::endl;
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string DiamondTrap::getName() const
{
	return (this->name);
}


void DiamondTrap::setName(std::string name)
{
	this->name = name;
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
			<< "AD:\t" << dt.getAD() << std::endl
			<< "ClapTrap name:\t" << dt.ClapTrap::getName() << std::endl;
	return (stream);
}
