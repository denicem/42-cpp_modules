/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:58:32 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 01:47:56 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.h"
#include "../inc/Dog.h"
#include "../inc/Cat.h"
#include "../inc/WrongAnimal.h"
#include "../inc/WrongCat.h"

#include <iostream>

void testDeepCopy()
{
	// TEST CASE FO RCHECKING FOR A DEEP COPY
	Dog dog, dog_cpy;

	std::cout << "Dog idea bf: " << dog.getBrain(7) << std::endl;
	dog.setBrain(7, "Attack postman.");
	std::cout << "Dog idea af: " << dog.getBrain(7) << std::endl;

	dog_cpy = dog;
	std::cout << "Dog copy idea: " << dog_cpy.getBrain(7) << std::endl;
	dog_cpy.setBrain(7, "Play fetch with hooman.");
	std::cout << "Dog idea: " << dog.getBrain(7) << std::endl;
	std::cout << "Dog copy idea af: " << dog_cpy.getBrain(7) << std::endl;
}

int main()
{
	// TEST CASE FOR CREATING DOGS AND CATS IN A LOOP
	int loop = 10;
	Animal* animals[loop];

	for (int i = 0; i < loop; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	animals[5]->makeSound();
	animals[6]->makeSound();

	for (int i = 0; i < loop; i++)
		delete animals[i];
	system("leaks Animal");

	testDeepCopy();
	system("leaks Animal");

	return (0);
}
