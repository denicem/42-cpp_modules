/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:49:38 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/02 21:07:50 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Brain::Brain()
{
	std::cout << "Brain created (Default).\n";
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain created (Copy).\n";
}

Brain::~Brain()
{
	std::cout << "Brain destroyed.\n";
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

/*
** ----------------------- METHODS -----------------------
*/

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

/*
** ----------------------- FUNCS -----------------------
*/