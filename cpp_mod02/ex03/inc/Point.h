/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:20:21 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 03:20:21 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.h"

#include <string>

class Point
{
private:
	const Fixed x, y;

public:
	Point();
	Point(const Point&);
	Point(const float, const float);
	~Point();

	Point& operator=(const Point&);

	Fixed getX() const;
	Fixed getY() const;
};

std::ostream& operator<<(std::ostream&, const Point&);

bool bsp(const Point, const Point, const Point, const Point);

#endif