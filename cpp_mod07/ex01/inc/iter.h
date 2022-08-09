/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 03:42:30 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 03:42:30 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T* array, int size, void (*func)(T arr))
{
	for (int i = 0; i < size; i++)
		func(array[i]);
}

template<typename T>
void print(T arr)
{
	std::cout << arr << std::endl;
}

#endif