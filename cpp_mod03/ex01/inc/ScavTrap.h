/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:42:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/26 23:16:51 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

class ScavTrap: ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap&);
	~ScavTrap();

	ScavTrap(std::string);

	void guardGate();
};