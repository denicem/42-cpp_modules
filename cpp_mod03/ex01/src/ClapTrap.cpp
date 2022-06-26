/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:19:31 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/26 23:13:13 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"

#include <iostream>

ClapTrap::ClapTrap(): name("NONAME"), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap NONAME created (Default).\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->ad = other.ad;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed.\n";

}

ClapTrap::ClapTrap(std::string name): name(name), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap " << name << " created.\n";
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hp && this->ep)
	{
		int damage = 1;
		this->ep--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << damage << " point of damage!\n";
	}
}

void ClapTrap::takeDamage(unsigned int damage)
{
	if (this->hp)
	{
		this->hp -= damage;
		std::cout << "ClapTrap " << this->name << " took " << damage << " damage!\n";
	}
}

void ClapTrap::beRepaired(unsigned int rp)
{
	if (this->hp)
	{
		this->hp += rp;
		std::cout << "ClapTrap " << this->name << " repaired itself by " << rp << " hp!\n";
	}
}

//

std::string ClapTrap::getName()
{
	return (this->name);
}

int ClapTrap::getHP()
{
	return (this->hp);
}

int ClapTrap::getEP()
{
	return (this->ep);
}

int ClapTrap::getAD()
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