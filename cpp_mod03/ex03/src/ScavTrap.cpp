/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:54:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/28 22:08:26 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTORS -----------------------
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
	// *this = other;
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
** ----------------------- METHODS -----------------------
*/

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode.\n";
}

