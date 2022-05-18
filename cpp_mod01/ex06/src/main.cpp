/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:41:59 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/18 17:41:59 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"
#include <iostream>

int main(int argc, const char *argv[])
{
	if (argc == 2)
	{
		Harl h;
		h.complain(argv[1]);
	}
	else
		std::cout << "Wrong number of arguments.\n";
	return (0);
}
