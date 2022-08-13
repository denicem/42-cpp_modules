/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:05:53 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/13 18:00:30 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.h"

#include <iostream>
#include <algorithm>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << sp << std::endl;

	try
	{
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sp.getNbr(7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp1 = Span(3);
		// sp1.addNumber(42);
		// std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// TEST second addNumber method
	// Span sp2 = sp;
	// std::cout << sp2 << std::endl;

	// Span sp = Span(50);
	// std::vector<int> vect;
	// vect.push_back(17);
	// vect.push_back(20);
	// vect.push_back(56);
	// vect.push_back(5);
	// vect.push_back(52);
	// sp.addNumber(vect.begin(), vect.end());
	// std::cout << sp << std::endl;

	return (0);
}