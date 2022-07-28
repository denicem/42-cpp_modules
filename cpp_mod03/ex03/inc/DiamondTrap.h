/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:41:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/28 23:55:40 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
	std::string name;
};
