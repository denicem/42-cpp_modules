/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:54:09 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/09 01:54:09 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T& arg1, T& arg2)
{
	T tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template<typename T>
T& min( T& arg1, T& arg2)
{
	return ((arg1 < arg2) ? arg1 : arg2);
}

template<typename T>
T& max(T& arg1, T& arg2)
{
	return ((arg1 > arg2) ? arg1 : arg2);
}

#endif