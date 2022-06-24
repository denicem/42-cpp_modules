/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:19:36 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/15 20:19:36 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"
#include <iostream>

int main()
{
	int nbr = 5;
	Zombie* horde = zombieHorde(nbr, "ABBIES");
	for (int i = 0; i < nbr; i++)
		horde[i].announce();
	delete[] horde;
	// system("leaks zombieHorde");
	return (0);
}
