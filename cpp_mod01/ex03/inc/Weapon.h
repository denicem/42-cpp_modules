/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:56:20 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 14:56:20 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(std::string);
	void setType(std::string);
	const std::string& getType() const;
};

#endif