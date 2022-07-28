/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:54:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/28 23:35:51 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTORS -----------------------
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
	// *this = other;
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
** ----------------------- METHODS -----------------------
*/

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->getName() << " requests a High Five.\n";
}
