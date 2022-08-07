/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:25:41 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 03:25:41 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.h"

/*
** ----------------------- CONSTRUCTORS & DESTRUCTOR -----------------------
*/

Point::Point(): x(0), y(0) {}
Point::Point(const Point& other): x(other.x), y(other.y) {}
Point::Point(const float x, const float y): x(x), y(y) {}

Point::~Point() {}

/*
** ----------------------- OPERATOR OVERLOADS -----------------------
*/

Point& Point::operator=(const Point& other)
{
	(void) other;
	return (*this);
}

/*
** ----------------------- GETTER AND SETTER METHODS -----------------------
*/

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}

/*
** ----------------------- FUNCS -----------------------
*/

std::ostream& operator<<(std::ostream& stream, const Point& p)
{
	stream << "[" << p.getX() << " " << p.getY() << "]";
	return (stream);
}
