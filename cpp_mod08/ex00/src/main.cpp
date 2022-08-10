/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:38:06 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/10 17:03:10 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.h"

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> nbrs;
	nbrs.push_back(56);
	nbrs.push_back(52);
	nbrs.push_back(17);
	nbrs.push_back(20);
	nbrs.push_back(30);
	nbrs.push_back(1);
	nbrs.push_back(4);

	try
	{
		int found = easyfind<int>(nbrs, 20);
		// int found = easyfind<int>(nbrs, 45);
		std::cout << found << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
