/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:35:02 by dmontema          #+#    #+#             */
/*   Updated: 2022/08/07 03:35:02 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.h"
#include "../inc/Point.h"

#include <iostream>

static Fixed sign(Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
			- (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(const Point a, const Point b, const Point c, const Point p)
{
	Fixed d1, d2, d3;
	bool hasNeg, hasPos;

	d1 = sign(p, a, b);
	d2 = sign(p, a, c);
	d3 - sign(p, c, a);

	hasNeg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	hasPos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return (!(hasNeg && hasPos));
}
