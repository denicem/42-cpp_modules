/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:54:42 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/01 19:03:04 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

FragTrap::FragTrap(): ClapTrap()
{
	this->hp = 100;
	if (this->ep == 10)
		this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap NONAME created (Default).\n";
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << this->name << " created (Copy)\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hp = 100;
	if (this->ep == 10)
		this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap " << this->name << " created.\n";

}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

FragTrap& FragTrap::operator=(const FragTrap &other)
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

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " requests a High Five.\n";
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream &stream, const FragTrap &ft)
{
	stream << "-\n"
			<< "FragTrap\n"
			<< "Name:\t" << ft.getName() << std::endl
			<< "HP:\t" << ft.getHP() << std::endl
			<< "EP:\t" << ft.getEP() << std::endl
			<< "AD:\t" << ft.getAD() << std::endl;
	return (stream);
}
