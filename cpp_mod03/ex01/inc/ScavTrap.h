/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:42:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 20:15:56 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap(std::string);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap&);

	void attack(const std::string&);
	void guardGate();
};

std::ostream& operator<<(std::ostream&, const ScavTrap&);

#endif