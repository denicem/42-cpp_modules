/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:58:32 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 02:21:44 by dmontema         ###   ########.fr       */
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
	// Animal *animal = new Animal();
	// Animal animal = Dog();
	Animal *animal = new Dog();

	animal->makeSound();

	delete animal;

	return (0);
}
