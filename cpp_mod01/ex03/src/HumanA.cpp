/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:30:25 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:25 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.h"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &type): wp(type)
{
	this->name = name;
	// this->wp.setType(type.getType());
	// this->wp = type;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->wp.getType() << std::endl;
}
