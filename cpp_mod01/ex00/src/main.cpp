/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:58:06 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/14 17:58:06 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

int main()
{
	Zombie* zptr;

	zptr = newZombie("SHAWIE");
	zptr->announce();
	randomChump("ABBY");
	delete zptr;
	return (0);
}

// TODO: determine in which case it is to allocate mem on the stack or heap.