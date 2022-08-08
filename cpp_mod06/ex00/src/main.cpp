/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:01:18 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/08 23:23:16 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.h"

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Convert c(argv[1]);

		c.determineType();
		c.convertType();
		c.printType();
	}
	else
		std::cout << "Wrong number of arguments.\n";

	return (0);
}
