/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 03:01:01 by dmontema          #+#    #+#             */
/*   Updated: 2023/01/13 18:08:08 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.h"
#include "../inc/AMateria.h"
#include "../inc/Ice.h"
#include "../inc/Cure.h"
#include "../inc/MateriaSource.h"
#include "../inc/Bag.h"

#include <iostream>

void func()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->use(0, *bob);

	delete me;
	delete bob;
	delete src;
}

int main()
{
	func();
	system("leaks Materia");

	return (0);
}
