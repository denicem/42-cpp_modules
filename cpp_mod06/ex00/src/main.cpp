/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:01:18 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 18:34:36 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.h"

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		try
		{
			Convert conv(argv[1]);
			std::cout << conv;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "Wrong number of arguments.\n";

	return (0);
}
