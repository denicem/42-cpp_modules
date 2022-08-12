/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:08:56 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/12 14:07:56 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.h"

#include <iostream>
#include <algorithm>

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Span::Span(): size(0) {}
Span::Span(const Span &other): size(other.size)
{
	this->nbrs.clear();
	this->size = other.size;
	for (std::vector<const int>::iterator it = other.nbrs.begin(); it != other.nbrs.end(); it++)
		this->nbrs.push_back(*it);
}
Span::Span(unsigned int size) : size(size) {}


Span::~Span()
{
	this->nbrs.clear();
}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->nbrs.clear();
		this->size = other.size;
		for (std::vector<const int>::iterator it = other.nbrs.begin(); it != other.nbrs.end(); it++)
			this->nbrs.push_back(*it);
	}
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

int Span::getSize() const
{
	return (this->nbrs.size());

}
int Span::getCapacity() const
{
	return (this->size);
}

int Span::getNbr(unsigned int idx) const
{
	if (idx >= this->size)
		throw OutOfRangeException();
	return (this->nbrs[idx]);
}

/*
** ----------------------- METHODS -----------------------
*/

void Span::addNumber(int nbr)
{
	if (this->nbrs.size() + 1 > size)
		throw SpanCapacityReachedException();
	this->nbrs.push_back(nbr);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (; begin != end; begin++)
		addNumber(*begin);
}

int Span::shortestSpan() const
{
	if (this->nbrs.size() < 2)
		throw SpanTooSmallException();

	std::vector<int>::const_iterator it = this->nbrs.begin();
	std::vector<int>::const_iterator it_end = this->nbrs.end();

	int diff = abs(*it - *(it + 1));
	int min = diff;
	for (; it != it_end; it++)
	{
		for (std::vector<int>::const_iterator it2 = it + 1; it2 != it_end; it2++)
		{
			diff = abs(*it - *it2);
			if (diff < min)
				min = diff;
		}
	}	
	return (min);
}

int Span::longestSpan() const
{
	if (this->nbrs.size() < 2)
		throw SpanTooSmallException();
	std::vector<int>::const_iterator max = std::max_element(this->nbrs.begin(), this->nbrs.end());
	std::vector<int>::const_iterator min = std::min_element(this->nbrs.begin(), this->nbrs.end());
	return (*max - *min);
}

/*
** ----------------------- EXCEPTION CLASS(ES) -----------------------
*/

const char* Span::SpanCapacityReachedException::what() const throw()
{
	return ("\033[31;1mCapacity reached.\033[0m");
}

const char* Span::OutOfRangeException::what() const throw()
{
	return ("\033[31;1mOut of range.\033[0m");
}

const char* Span::SpanTooSmallException::what() const throw()
{
	return ("\033[31;1mSpan too small.\033[0m");
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const Span& s)
{
	int size = s.getSize();
	for (int i = 0; i < size; i++)
	{
		if (i)
			stream << " ";
		stream << s.getNbr(i);
	}
	return (stream);
}
