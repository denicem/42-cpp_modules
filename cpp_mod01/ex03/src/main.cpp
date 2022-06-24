/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:21:45 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/16 17:21:45 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.h"
#include "../inc/HumanA.h"
#include "../inc/HumanB.h"

int main()
{
	// Weapon pistol = Weapon("Pistol");
	// HumanA ha = HumanA("SHAWIE", pistol);
	// HumanB hb("ABBY");

	// ha.attack();
	// pistol.setType("Desert Eagle");
	// ha.attack();
	// hb.attack();

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}	

// TODO: understand code and those concepts of it and optimize if possible.