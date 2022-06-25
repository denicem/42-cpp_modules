/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:55:14 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/22 02:55:14 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"
#include <iostream>

int main()
{
	// Fixed a;
	// Fixed b( a );
	// Fixed c;

	// c = b;

	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

	Fixed const b(10);
	std::cout << "b is " << b << std::endl;

	// int nbr;
	// nbr = 10 << 2;
	// std::cout << (10 << 1) << std::endl;

	return (0);
}
