/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/06/27 20:41:19 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"

#include <iostream>

int main()
{
	// *** TEST CASES FOR CONSTRUCTORS ***
	{
		std::cout << "*** TEST CASES FOR CONSTRUCTORS ***\n";
		// ClapTrap;
		// ClapTrap("LORR");

		ClapTrap ct;
		ClapTrap ct1 = ClapTrap("DNC");
		// ClapTrap ct1("DNC");
		ClapTrap ct2 = ClapTrap(ct1);
		// ClapTrap ct2 = ct1;
	}
	std::cout << std::endl;

	// *** TEST CASES FOR CLASS METHODS, OVERLOAD FUNCS, etc. ***
	{
		std::cout << "*** TEST CASES FOR CLASS METHODS, OVERLOAD FUNCS, etc. ***\n";
		ClapTrap ct("DNC");
		ClapTrap ct1("LORR");
		std::cout << ct << std::endl << ct1 << std::endl;

		ct.attack(ct1.getName());
		// ct1.takeDamage(ct.getAD());
		ct1.takeDamage(2);
		ct1.beRepaired(1);
		std::cout << ct << std::endl << ct1 << std::endl;
	}

	return (0);
}
