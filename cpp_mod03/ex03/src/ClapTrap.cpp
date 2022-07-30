/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:19:31 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 21:02:58 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

ClapTrap::ClapTrap(): name("NONAME"), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap NONAME created (Default).\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap " << this->name << " created (Copy).\n";
}

ClapTrap::ClapTrap(std::string name): name(name), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap " << this->name << " created.\n";
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(const std::string &target)
{
	if (this->hp && this->ep)
	{
		this->ep--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " point(s) of damage!\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp)
	{
		this->hp -= amount;
		std::cout << "ClapTrap " << this->name << " took " << amount << " damage! Remaining HP: " << this->hp << ".";
		if (!this->hp)
			std::cout << " DEAD.";
		std::cout << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp)
	{
		this->hp += amount;
		this->ep--;
		std::cout << "ClapTrap " << this->name << " repaired itself by " << amount << " HP. Updated HP: " << this->hp << ".\n";
	}
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getHP() const
{
	return (this->hp);
}

int ClapTrap::getEP() const
{
	return (this->ep);
}

int ClapTrap::getAD() const
{
	return (this->ad);
}


void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHP(int hp)
{
	this->hp = hp;
}

void ClapTrap::setEP(int ep)
{
	this->ep = ep;
}

void ClapTrap::setAD(int ad)
{
	this->ad = ad;
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream &stream, const ClapTrap &ct)
{
	stream << "-\n"
			<< "ClapTrap\n"
			<< "Name:\t" << ct.getName() << std::endl
			<< "HP:\t" << ct.getHP() << std::endl
			<< "EP:\t" << ct.getEP() << std::endl
			<< "AD:\t" << ct.getAD() << std::endl;
	return (stream);
}
