/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:05:09 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/05 17:17:20 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"

#include <string>

class Character: public ICharacter
{
protected:
	std::string name;
	AMateria* inv[4];

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