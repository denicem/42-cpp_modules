/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:42:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/30 17:09:36 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap&);
	FragTrap(std::string);
	~FragTrap();

	void highFivesGuys();
};

#endif