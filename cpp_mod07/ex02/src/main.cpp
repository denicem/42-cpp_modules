/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:22:07 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 22:57:32 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.h"

#include <iostream>

int main()
{
	// int size = 5;

	// Array<int> arr(size);
	Array<std::string> arr(10);

	// arr[2] = 42;
	arr[2] = "Hello";

	for (int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;

	// try
	// {
	// 	arr[12] = "huhu";
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	return (0);
}
