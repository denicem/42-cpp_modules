/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:23:50 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/01 19:09:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.h"
#include "../inc/ScavTrap.h"
#include "../inc/FragTrap.h"

#include <iostream>

int main()
{
	FragTrap ft;
	FragTrap ft1("DNC");
	FragTrap ft_cpy(ft1);
	ft1.highFivesGuys();
	ft1.attack(ft.getName());
	std::cout << ft << ft1 << ft_cpy;
	
	return (0);
}
