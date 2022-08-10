/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 04:43:53 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/10 21:17:38 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span
{
private:
	unsigned int size;
	std::vector<int> nbrs;

public:
	Span();
	Span(const Span&);
	Span(unsigned int);
	~Span();

	Span& operator=(const Span&);

	int getSize() const;
	int getCapacity() const;
	int getNbr(unsigned int) const;

	void addNumber(int);
	void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
	void createNumbers(unsigned int);
	int shortestSpan() const;
	int longestSpan() const;

	class SpanCapacityReachedException: public std::exception
	{
		const char* what() const throw();
	};
	class OutOfRangeException: public std::exception
	{
		const char* what() const throw();
	};
	class SpanTooSmallException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const Span&);

#endif