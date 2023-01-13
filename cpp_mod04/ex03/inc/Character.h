/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:05:09 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/13 18:01:05 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"
#include "Bag.h"

#include <string>

class Character: public ICharacter
{
protected:
	std::string name;
	AMateria* inv[4];
	Bag bag;

public:
	Character();
	Character(std::string);
	Character(const Character&);
	~Character();

	Character& operator=(const Character&);

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	std::string const & getName() const;
};

#endif