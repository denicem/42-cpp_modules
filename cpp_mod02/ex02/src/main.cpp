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
#include <iostream>

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;


	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	/////////////////////////////////////////////

	Fixed c(1);
	Fixed d(2.50f);
	Fixed e(10);
	Fixed f(15);

	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;

	std::cout << d << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c + c << std::endl;
	std::cout << d * 2 << std::endl;
	std::cout << d - e << std::endl;
	std::cout << f / 3 << std::endl;

	return (0);
}
