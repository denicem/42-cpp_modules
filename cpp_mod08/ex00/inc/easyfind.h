/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:34:23 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/10 16:47:09 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <exception>

class NotFoundException: public std::exception
{
	const char* what() const throw() {
		return ("Not Found.");
	}
};

template<typename T>
T easyfind(std::vector<T>& t, int i)
{
	for (typename std::vector<T>::iterator it = t.begin(); it != t.end(); it++)
	{
		if (*it == i)
			return (*it);
	}
	throw NotFoundException();
}

#endif