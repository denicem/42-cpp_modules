/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:49:38 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/04 01:19:27 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.h"

#include <iostream>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "No idea...";
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

std::string Brain::getIdea(unsigned index)
{
	if (index < 100)
		return (this->ideas[index]);
	return ("");
}

void Brain::setIdea(unsigned index, std::string idea)
{
	if (index < 100)
		this->ideas[index] = idea;
}

/*
** ----------------------- FUNCS -----------------------
*/