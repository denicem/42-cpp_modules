/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:58:32 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 20:21:46 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.h"
#include "../inc/Dog.h"
#include "../inc/Cat.h"
#include "../inc/WrongAnimal.h"
#include "../inc/WrongCat.h"

#include <iostream>

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* i = new Dog();
		const Animal* j = new Cat();

		std::cout << i->getType() << std::endl;
		std::cout << j->getType() << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << std::endl;
		std::cout << meta->getType() << std::endl;

		i->makeSound();
		meta->makeSound();

		delete i;
		delete meta;
	}

	return (0);
}