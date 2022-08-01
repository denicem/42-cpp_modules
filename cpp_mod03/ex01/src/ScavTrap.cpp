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
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "ScavTrap NONAME created (Default).\n";
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap " << this->name << " created (Copy)\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "ScavTrap " << this->name << " created.\n";
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hp = other.hp;
		this->ep = other.ep;
		this->ad = other.ad;
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void ScavTrap::attack(const std::string &target)
{
	if (this->hp && this->ep)
	{
		this->ep--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->ad << " point(s) of damage!\n";
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode.\n";
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
