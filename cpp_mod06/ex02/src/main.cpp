/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:23:13 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 22:04:31 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BaseABC.h"

#include <iostream>
#include <cstdlib>
#include <time.h>

Base* generate()
{
	srand(time(0));
	int rdm = rand() % 3 + 1;

	switch(rdm)
	{
		case 1: return (new A());
		case 2: return (new B());
		case 3: return (new C());
	}
	return (new Base());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Class A was created." << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Class B was created." << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Class C was created." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A a;
		a = dynamic_cast<A&>(p);
		std::cout << "Class A was created." << std::endl;
	} catch (const std::exception& e) {	}

	try
	{
		B b;
		b = dynamic_cast<B&>(p);
		std::cout << "Class B was created." << std::endl;
	} catch (const std::exception& e) {	}

	try
	{
		C c;
		c = dynamic_cast<C&>(p);
		std::cout << "Class C was created." << std::endl;
	} catch (const std::exception& e) {	}
	
}

int main()
{
	Base* p = generate();

	std::cout << "Identify by pointer: ";
	identify(p);
	std::cout << "Identify by reference: ";
	identify(*p);

	delete p;
	return (0);
}
