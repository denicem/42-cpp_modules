/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:55:14 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/27 17:23:40 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"
#include "../inc/Point.h"

#define RED		"\033[31;1m"
#define GREEN	"\033[32;1m"
#define RESET	"\033[0m"

#include <iostream>

int main()
{
	Point a(3, 1);
	Point b(7, 2);
	Point c(5, 4);
	Point pIn(5, 2);
	Point pOut(3, 5);
	
	std::cout << a << ", " << b << ", " << c << ": " << pIn << std::endl;
	if (bsp(a, b, c, pIn))
		std::cout << GREEN << "Point is inside the triangle" << RESET << std::endl;
	else
		std::cout << RED << "Point is outside the triangle" << RESET << std::endl;

	std::cout << a << ", " << b << ", " << c << ": " << pOut << std::endl;
	if (bsp(a, b, c, pOut))
		std::cout << GREEN << "Point is inside the triangle" << RESET << std::endl;
	else
		std::cout << RED << "Point is outside the triangle" << RESET << std::endl;

	return (0);
}
