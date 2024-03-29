/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 02:43:53 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 17:11:31 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include "AMateria.h"

#include <string>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}

	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;

	virtual std::string const & getName() const = 0;
};

#endif