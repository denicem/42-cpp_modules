/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 03:45:29 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 03:45:29 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../inc/iter.h"

#include <string>

int main()
{
	int int_array[] = {2, 4, 5, 3, 1};
	iter(int_array, 5, &print);

	float float_array[] = {22.56f, 42.42f, 56.52f, 30.15f, 1.02f};
	iter(float_array, 5, &print);

	std::string string_array[] = {"Hello", "my", "Universe"};
	iter(string_array, 3, &print);
	
	return (0);
}