/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:41:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 21:58:29 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public ScavTrap, FragTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap&);
	DiamondTrap(std::string);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap&);

	void attack(const std::string&);
	void whoAmI();

	std::string getName() const;

	void setName(std::string);
};

std::ostream& operator<<(std::ostream&, const DiamondTrap&);

#endif