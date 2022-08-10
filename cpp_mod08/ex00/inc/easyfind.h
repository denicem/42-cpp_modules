/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:34:23 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/11 00:08:32 by dmontema         ###   ########.fr       */
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
	typename std::vector<T>::iterator element = std::find(t.begin(), t.end(), i);
	if (element == t.end())
		throw NotFoundException();
	return (*element);
}

#endif