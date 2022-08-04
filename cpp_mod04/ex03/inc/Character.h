/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:05:09 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 23:11:54 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"
#include "MateriaSource.h"

#include <string>

class Character: public ICharacter
{
private:
	std::string name;
	MateriaSource* inv;

public:
	Character();
	Character(std::string);
	Character(const Character&);
	~Character();

	Character& operator=(const Character&);

	void equip(AMateria *);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	std::string& getName() const;
};

#endif