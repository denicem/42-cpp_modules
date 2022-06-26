/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:54:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/26 23:26:04 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.h"

#include <iostream>

ScavTrap::ScavTrap()
{
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	std::cout << "ScavTrap NONAME created (Default).\n";
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "ScavTrap " << this->getName() << " created (Copy)\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destroyed.\n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	std::cout << "ScavTrap " << this->getName() << " created.\n";

}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode.\n";
}

