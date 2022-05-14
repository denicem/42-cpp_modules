/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:28:18 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/14 20:28:18 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

Zombie* newZombie(std::string name) // FIXME: not sure if static var is correct here?
{
	static Zombie zombie(name);
	return (&zombie);
}