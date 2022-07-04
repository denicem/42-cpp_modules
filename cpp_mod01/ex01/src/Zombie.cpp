/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:47:00 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/14 16:47:00 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"
#include <iostream>

Zombie::Zombie(): name("Unknown") {}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie()
{
	std::cout <<  this->name << std::endl;
}

std::string Zombie::getName()
{
	return (this->name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
