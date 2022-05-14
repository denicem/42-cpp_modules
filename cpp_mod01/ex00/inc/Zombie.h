/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:44:14 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/14 16:44:14 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string);
	Zombie();
	~Zombie();

	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string);

#endif