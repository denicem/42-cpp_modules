/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:53:08 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 21:16:24 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.h"
#include "../inc/serialize.h"

#include <iostream>

void func()
{
	Data* d = new Data();
	d->name = "DATA";
	d->nbr = 42;

	std::cout << d->name << ": " << d->nbr << std::endl;
	std::cout << d << std::endl;

	uintptr_t raw = serialize(d);
	std::cout << raw << std::endl;

	Data* d1 = deserialize(raw);

	std::cout << d1->name << ": " << d1->nbr << std::endl;
	std::cout << d1 << std::endl;
	
	delete d1;
}

int main()
{
	func();
	system("leaks serialization");
	return (0);
}
