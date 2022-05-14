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

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
