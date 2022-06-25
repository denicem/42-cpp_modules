/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontema <dmontema@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:25:12 by dmontema          #+#    #+#             */
/*   Updated: 2022/05/22 01:25:12 by dmontema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <ostream>

class Fixed
{
private:
	int fp;
	static const int fract_bits = 8;

public:
	Fixed();
	Fixed(Fixed &);
	~Fixed();
	Fixed &operator=(const Fixed &);

	Fixed(int const);
	Fixed(float);

	void setRawBits(int const raw);
	int getRawBits() const;

	float toFloat();
	int toInt();
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif