/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 22:05:58 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"
#include "../inc/ScavTrap.h"
#include "../inc/FragTrap.h"
#include "../inc/DiamondTrap.h"

#include <iostream>

int main()
{
	DiamondTrap dt;
	std::cout << dt << std::endl;
	// DiamondTrap dt1("DNC");
	// std::cout << std::endl;
	// DiamondTrap dt2(dt1);
	// std::cout << std::endl;

	// dt.whoAmI();
	// dt1.whoAmI();
	// dt2.whoAmI();
	// std::cout << std::endl;
	// dt1.guardGate();
	// std::cout << std::endl;
	// dt2.highFivesGuys();
	// std::cout << std::endl;
	// dt1.attack(dt.getName());
	// std::cout << std::endl;
	// std::cout << dt << dt1;
	// std::cout << std::endl;
	
	return (0);
}
