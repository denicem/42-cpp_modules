/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/01 19:02:11 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"
#include "../inc/ScavTrap.h"
#include "../inc/FragTrap.h"
#include "../inc/DiamondTrap.h"

#include <iostream>

int main()
{
	DiamondTrap dt("DNC");
	DiamondTrap dt1("DNC");
	DiamondTrap dt2(dt1);

	std::cout << std::endl;
	dt.whoAmI();
	dt1.whoAmI();
	dt2.whoAmI();

	std::cout << std::endl;
	dt1.guardGate();
	dt2.highFivesGuys();
	dt1.attack(dt.getName());
	
	std::cout << std::endl << dt << dt1 << std::endl;
	
	return (0);
}
