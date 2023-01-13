/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 18:01:53 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/13 18:07:53 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.h"
#include "../inc/Bag.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Character::Character(): name("no name")
{
	std::cout << "Character " << this->name << " created (Default).\n";
}

Character::Character(std::string name) : name(name)
{
	std::cout << "Character " << this->name << " created.\n";
}

Character::Character(const Character& other)
{
	*this = other;
	std::cout << "Character " << this->name << " created (Copy).\n";
}


Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inv[i])
			delete this->inv[i];
	std::cout << "Character " << this->name << " destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
			this->inv[i] = other.inv[i];
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inv[i])
		{
			this->inv[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->bag.addMateria(this->inv[idx]);
		this->inv[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inv[idx])
		this->inv[idx]->use(target);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

std::string const & Character::getName() const
{
	return (this->name);
}
