/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:19:31 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/13 18:19:31 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"

ClapTrap::ClapTrap(): name("NONAME"), hp(10), ep(10), ad(0) {}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other) //TODO: implement GETTER & SETTER METHODS
{
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->ad = other.ad;
	return (*this);
}

ClapTrap::~ClapTrap() {}

ClapTrap::ClapTrap(std::string name): name(name), hp(10), ep(10), ad(0) {}
