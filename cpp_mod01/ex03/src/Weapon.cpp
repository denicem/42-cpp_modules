/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:11:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 15:11:02 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"

Weapon::Weapon()
{
	this->type = "no weapon";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType() const
{
	return (this->type);
}