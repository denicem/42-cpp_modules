/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:26:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 17:26:41 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.h"
#include <iostream>

HumanB::HumanB(std::string name): name(name), wp(NULL) {}

void HumanB::setWeapon(Weapon &type)
{
	this->wp = &type;
}

void HumanB::attack()
{
	if (this->wp != NULL)
		std::cout << this->name << " attacks with their " << this->wp->getType() << std::endl;
	else
		std::cout << this->name << " don't have a weapon.\n";
}
