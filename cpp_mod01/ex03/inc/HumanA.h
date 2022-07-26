/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:06:20 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 15:06:20 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

#include <string>

class HumanA
{
private:
	std::string name;
	Weapon& wp;

public:
	HumanA(std::string, Weapon&);
	void attack();
};

#endif