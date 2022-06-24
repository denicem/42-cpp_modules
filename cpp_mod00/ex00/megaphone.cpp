/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:30:30 by dmontema          #+#    #+#             */
/*   Updated: 2021/09/26 23:30:30 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char to_Upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = (c - 'a') + 'A';
	return (c);
}

int	main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << to_Upper(argv[i][j]); // normal type casting allowed?
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
