/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/28 22:13:22 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"
#include "../inc/ScavTrap.h"

#include <iostream>

int main()
{
	ScavTrap st;
	ScavTrap st1("DNC");
	ScavTrap st_cpy(st1);
	st_cpy.guardGate();
	st1.attack(st.getName());
	std::cout << st << st1;
	
	return (0);
}
