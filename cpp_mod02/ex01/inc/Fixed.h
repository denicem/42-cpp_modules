/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:25:12 by dmontema          #+#    #+#             */
/*   Updated: 2022/07/26 17:36:54 by dmontema         ###   ########.fr       */
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
	Fixed(Fixed &);
	~Fixed();
	Fixed &operator=(const Fixed &);

	Fixed(const int);
	Fixed(const float);

	void setRawBits(int const raw);
	int getRawBits() const;

	float toFloat() const;
	int toInt() const;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif