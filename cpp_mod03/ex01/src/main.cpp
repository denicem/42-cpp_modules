/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/26 23:27:58 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"
#include "../inc/ScavTrap.h"

int main()
{
	// ClapTrap ct;
	// ClapTrap ct1 = ClapTrap("DNC");

	// ct1.attack("LORR");
	// ct.takeDamage(1);
	// ct.beRepaired(1);

	ScavTrap st;
	ScavTrap st1("DNC");
	st1.guardGate();

	return (0);
}
