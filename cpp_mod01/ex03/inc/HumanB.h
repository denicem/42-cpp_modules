/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:09:09 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 15:09:09 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

#include <string>

class HumanB
{
private:
	std::string name;
	Weapon* wp;

public:
	HumanB(std::string);
	void setWeapon(Weapon&);
	void attack();
};

#endif