/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:25:12 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/26 21:28:31 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <ostream>

class Fixed
{
private:
	int val;
	static const int fract_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &);
	Fixed(const int);
	Fixed(const float);
	~Fixed();

	Fixed& operator=(const Fixed&);

	float toFloat() const;
	int toInt() const;

	int getRawBits() const;
	void setRawBits(const int raw);
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif