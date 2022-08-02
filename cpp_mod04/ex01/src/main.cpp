/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:58:32 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 23:21:46 by dmontema         ###   ########.fr       */
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
	int loop = 10;
	Animal* animals[loop];

	for (int i = 0; i < loop; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	animals[6]->makeSound();
	animals[5]->makeSound();

	// delete[] animals;
	system("leaks Animal");
	return (0);
}