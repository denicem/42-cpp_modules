/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/27 18:47:15 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"
#include "../inc/ScavTrap.h"

int main()
{
	ClapTrap ct;
	// ClapTrap ct1 = ClapTrap("DNC");

	// ct1.attack("LORR");
	// ct.takeDamage(1);
	// ct.beRepaired(1);

	ScavTrap st;
	ScavTrap st1("DNC");
	ScavTrap st_cpy = ScavTrap(st1);
	ct.print_stats();
	st.print_stats();
	st1.print_stats();
	st_cpy.print_stats();
	st_cpy.guardGate();
	st1.attack(st.getName());
	
	return (0);
}
